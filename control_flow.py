import re
from collections import deque

import networkx as nx

from auxiliary_functions import get_content


def get_important_content(path):
    """
    This function finds important content (information about control flow)
     from file which was generated by PIPS
    :param path: path, path to the file generated by PIPS
    :return: list, list of strings form the file mentioned above
    """
    content = get_content(path)
    content = [item for item in content if len(item) > 0]
    first_value_index = True
    first_value = 0
    last_value = 0
    for idx, element in enumerate(content):
        if element[0] == '[' and first_value_index:
            first_value_index = False
            first_value = idx
        if 'GEN_MULTI_RECURSE_EXPLORER' in element:
            last_value = idx - 1
    content = content[first_value:last_value + 1]
    return content


def get_timeline(important_content):
    """
    This function returns a list, values are strings related to some control flow objects, corresponding
    indices are timestamps

    :param important_content: list, list of strings from the file generated by PIPS
    :return: list, list of strings, values are strings related to some control flow objects, corresponding
    indices are timestamps
    """
    timestamp = 0
    time = [0] * len(important_content)
    for idx, element in enumerate(important_content):
        if '[loop_filter]IN' in re.sub(r"[\n\t\s]*", "", element):
            time[timestamp] = 'loop_in'
            timestamp += 1
        if '[loop_rewrite]OUT' in re.sub(r"[\n\t\s]*", "", element):
            time[timestamp] = 'loop_out'
            timestamp += 1
        if '[test_filter]IN' in re.sub(r"[\n\t\s]*", "", element):
            time[timestamp] = 'br_in'
            timestamp += 1
        if '[test_rewrite]OUT' in re.sub(r"[\n\t\s]*", "", element):
            time[timestamp] = 'br_out'
            timestamp += 1

        if idx < len(important_content) - 2:
            if '[statement_filter]IN' in re.sub(r"[\n\t\s]*", "", element) and '[call_filter]IN' in re.sub(r"[\n\t\s]*",
                                                                                                           "",
                                                                                                           important_content[
                                                                                                               idx + 2]):
                time[timestamp] = 'st'
                timestamp += 1

    return time[:timestamp]


class Control_flow:

    def __init__(self):
        self.timeline = []
        self.kernel_path = []
        self.graphs = []
        self.names = []
        self.perfectly_nests = []

    def get_timeline_for_a_single_file(self, file):
        """
        This function updates timeline (adding there control flow timeline) and
        kernel_path (adding there path to a corresponding kernel)
        :param file: path, path to a file for which we will extract information above
        """
        self.timeline.append(get_timeline(get_important_content(file)))
        self.kernel_path.append(file)

    def create_control_flow_single_kernel(self, kernel):
        """
        This function returns a graph of dependencies based on given timeline + updates list of graphs

        :param kernel: list, timeline for which we want to extract the graph
        :return: graph, dependence graph
        """
        g = nx.DiGraph()
        current_loops = deque()
        current_node = 0
        node_to_connect = 0
        first_node_index = 0
        for element in kernel:
            if element == 'loop_in' and len(current_loops) == 0:
                g.add_node(current_node, feature='for')
                current_loops.append(current_node)
                node_to_connect = current_node
                first_node_index = current_node
                current_node += 1

            else:
                if element == 'loop_in':
                    g.add_node(current_node, feature='for')
                    g.add_edge(node_to_connect, current_node)
                    current_loops.append(current_node)
                    node_to_connect = current_node
                    current_node += 1

            if element == 'st' and len(current_loops) > 0:
                g.add_node(current_node, feature='st')
                g.add_edge(node_to_connect, current_node)
                node_to_connect = current_node
                current_node += 1

            if element == 'loop_out':
                current_loop = current_loops.pop()
                g.add_edge(node_to_connect, current_loop)
                if len(current_loops) > 0:
                    node_to_connect = current_loop
                else:
                    g.add_node(current_node, feature='exit')
                    g.add_edge(first_node_index, current_node)
                    self.graphs.append(g)
                    g = nx.DiGraph()
        return self.graphs

    def get_loop_nest_information(self, kernel):
        """
        This function appends to perfectly_nests list information about perfectly nests of this timeline
        :param kernel: list, timeline for which we want to check perfectly-nests
        """
        timeline = kernel[kernel.index('loop_in'):]
        last_in = len(timeline) - 1 - timeline[::-1].index('loop_in')
        first_out = timeline.index('loop_out')
        first_st = timeline.index('st')
        last_st = len(timeline) - 1 - timeline[::-1].index('st')

        if last_in < first_st and last_st < first_out:
            self.perfectly_nests.append(1)
        else:
            self.perfectly_nests.append(0)

    def get_control_flow_graphs(self, kernels, paths):
        """
        This function creates graphs and their names for all elements from timeline list
        :param kernels: list, list of timelines
        :param paths: list, list of paths
        :return: (list, list), list of graphs, list of names
        """
        for index, kernel in enumerate(kernels):
            self.get_loop_nest_information(kernel)
            number_of_loops_before = len(self.graphs)
            self.create_control_flow_single_kernel(kernel)
            number_of_loops = len(self.graphs) - number_of_loops_before
            current_name = paths[index]
            current_name = current_name[current_name.rfind('/') + 9:]
            for i in range(number_of_loops):
                self.names.append('{}_loop_{}'.format(current_name, str(i + 1)))
        return self.graphs, self.names