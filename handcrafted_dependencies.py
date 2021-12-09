from auxiliary_functions import get_content
import itertools
from settings import polybench_benchmark
import networkx as nx
polybench_dependence_bounds_names = ['kernel_' + element for element in polybench_benchmark.names]


def get_meaningful_content_from_dependence_graph(file):
    """
    This function deletes those dependencies which PIPS didn't manage to compute and saves them to a more convenient
    format for further analysis.

    :param file: path, path to a text file with PIPS dependence results for some kernel
    :return: list, each dependence was stored to this list
    """
    raw_strings = get_content(file)
    content = []
    for item in raw_strings:
        if not 'ANY' in item and not '*' in item and len(item) > 0:
            tmp_item = item.split(' ')
            tmp_item.remove('-')
            content.append(tmp_item)
    return content


def get_bounds_separation(content, bounds):
    """
    This functions separate dependencies of the whole while to dependencies related to particular loops using
    the information of the loop location (bounds) in the source code. Number of bounds corresponds to a number of
    loops in the considering file
    :param content: [list, list...] list of dependencies for the considering file
    :param bounds:
    :return: [list, list...] list of filtered lists of dependencies for the considering file
    """
    contents = [[] for i in range(len(bounds))]
    for element in content:
        for idx, bound in enumerate(bounds):
            if bound[0] <= int(element[0]) <= bound[1] and bound[0] <= int(element[1]) <= bound[1]:
                contents[idx].append(element)
                break
    return contents


def get_levels(level_string):
    """
    Small preprocessing of a level string
    :param level_string: str, level string
    :return: str, preprocessed string
    """
    processed_level_string = level_string[level_string.find('(') + 1:level_string.rfind(')')].split(',')
    return processed_level_string


def get_all_combinations(max_loop_nest_level):
    """
    This function returns all combinations for a set (1,2,3...max_loop_nest_level)
    :param max_loop_nest_level: int, max loop nest level under our consideration
    :return: list, all possible combinations of levels in a sorted order
    """
    possible_levels = []
    for i in range(1, max_loop_nest_level + 1):
        possible_levels.append(str(i))
    all_combinations = []
    for L in range(0, len(possible_levels) + 1):
        for subset in itertools.combinations(possible_levels, L):
            all_combinations.append(subset)

    all_combinations = [list(element) for element in all_combinations]
    all_combinations = [[''] if len(x) == 0 else x for x in all_combinations]
    return all_combinations


def get_dependence_vector(content):
    """
    Changes a little bit values inside content list. It will be easier to process them
    :param content: [list, list...] initial list of dependencies for a considering file
    :return:  [list, list...] preprocessed list of dependencies for a considering file
    """
    vectors = []
    for data in content:
        dependence = data[2] + data[3]
        vectors.append([data[0], data[1], dependence, data[4], data[5], get_levels(data[6])])
    return vectors


def get_features(content):
    """

    :param content:
    :return:
    """
    feature_dict = {}
    dependence_vector = get_dependence_vector(content)
    feature_dict['Number_of_dependencies'] = len(dependence_vector)
    feature_dict['Number_of_WW'], feature_dict['Number_of_RW'], feature_dict['Number_of_WR'], feature_dict[
        'Number_of_RR'] = get_number_of_dependencies(dependence_vector)

    sets_of_array = get_involved_arrays(dependence_vector)
    number_of_arrays_and_vars = [0, 0]
    for idx, item in enumerate(sets_of_array):
        number_of_arrays_and_vars[idx] = len(item)
    feature_dict['Involved_arrays'], feature_dict['Involved_vars'] = number_of_arrays_and_vars

    level_features = get_level_features(dependence_vector)

    counter = 0
    for i in range(len(level_features)):
        for j in range(len(level_features[i])):
            feature_dict['level_feature_{}'.format(str(counter))] = level_features[i][j]
            counter += 1
    return feature_dict


def get_level_features(dependence_vector, max_loop_nest_level=5):
    """

    :param dependence_vector:  [list, list...] list of dependencies for a considering file
    :param max_loop_nest_level:  max loop nest level that we can consider for our benchmarks
    :return: [list, list, list...] encoding of the dependence levels. In general describes number of dependencies of a
    specific type at a specific level. All possible combinations are taken into account
    """
    subsets = get_all_combinations(max_loop_nest_level)
    deps = ['WW', 'RW', 'WR', 'RR']
    level_features = [[0] * len(subsets), [0] * len(subsets), [0] * len(subsets), [0] * len(subsets)]
    for single_dependence in dependence_vector:
        dependence_index = deps.index(single_dependence[2])
        subset_index = subsets.index(single_dependence[-1])
        level_features[dependence_index][subset_index] += 1
    return level_features


def get_number_of_dependencies(dependence_list):
    """
    :param dependence_list: [list, list...] list of dependencies for a considering file
    :return: [int,int,int,int] a list with 4 values, each values corresponds to a number of dependencies of a certain type
    """
    amount = [0] * 4
    deps = ['WW', 'RW', 'WR', 'RR']
    for item in dependence_list:
        for idx, val in enumerate(deps):
            if val in item:
                amount[idx] += 1
    return amount


def get_involved_arrays(dependence_list):
    """
    This function finds arrays and variables involved to a given dependencies
    :param dependence_list: [list, list...] list of dependencies for a considering file
    :return: (set,set) two sets of involved arrays and vars
    """
    arrays = set()
    variables = set()
    for item in dependence_list:
        array = item[-2]
        if '[' in array:
            arrays.add(array[1:array.index('[')])
        else:
            variables.add(array[1:-1])
    return arrays, variables


def create_graph_based_on_vector(content):
    """
    This function returns a graph based on text dependence file. Each l- and r-value considered as a node in this graph.
    Nodes have labels (dimensionality of an array corresponding to node, 0 - for variables). Edges have labels (type of the dependency: WW, WR, RR, RW)
    :param content: (path) path to the text file from those we will reconstruct the graph
    :return: (nx.DiGraph) graph
    """
    g = nx.DiGraph()
    nodes = []
    current_node = 0
    for dependence in content:
        origin_node = (dependence[0], dependence[2], dependence[4])
        target_node = (dependence[1], dependence[3], dependence[5])

        if origin_node in nodes:
            origin_index = nodes.index(origin_node)
        else:
            g.add_node(current_node, feature=dependence[4].count('['))
            nodes.append(origin_node)
            origin_index = current_node
            current_node += 1

        if target_node in nodes:
            target_index = nodes.index(target_node)
        else:
            g.add_node(current_node, feature=dependence[5].count('['))
            nodes.append(target_node)
            target_index = current_node
            current_node += 1

        g.add_edge(origin_index, target_index, dep=dependence[2] + dependence[3])
    return g


class Dependencies:

    def __init__(self):
        self.graphs = []
        self.names = []
        self.output = []

    def feature_extraction_for_a_given_file(self, file, bounds=[(-1, 10 ** 5)]):
        """
    This function computes for a given file 1) handcrafted features and store them in the output list
    2) names of each kernel and stores in names list 3) graphs for each kernel and stores in  graphs list
    It's convenient to create an object of this class for each benchmark and store in these lists all the data
    related only for this benchmark

    :param file: (path) path to a file, for which we want to extract handcrafted features, names, and graphs
    :param bounds: (int,int) A dependence graph file generated by PIPS stores positions for each dependence statement.
    It's necessary to separate them if kernel stores more than one loop or have additional dependencies outside the loop.
    Otherwise, we use (-1, 10 ** 5) as a guarantee that all statements in this file belong to the loop
        """
        name = file[file.rfind('/') + 7:]
        content = get_meaningful_content_from_dependence_graph(file)
        separated_content = get_bounds_separation(content, bounds)
        for idx, loop_content in enumerate(separated_content):
            features = get_features(loop_content)
            self.output.append(features)
            self.graphs.append(create_graph_based_on_vector(loop_content))
            self.names.append('{}_loop_{}'.format(name, str(idx + 1)))

    def add_labels(self):
        """
        This function add a label 'label' for each dataframe from output list. The value of this label
        is taken from list names
        """
        for idx, dep_graph in enumerate(self.output):
            dep_graph['label'] = self.names[idx]
