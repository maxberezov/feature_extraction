from karateclub import GL2Vec, Graph2Vec
import pandas as pd
import os
from collect_dep_graph_features import control_flow_graph_extraction, dep_graph_handcrafted_features_extraction
from control_flow import Control_flow
from handcrafted_dependencies import Dependencies
from settings import tsvc_benchmark, polybench_benchmark, generated_benchmark, features_path, \
    control_graph_characteristics, \
    dep_graph_characteristics
import networkx as nx
from auxiliary_functions import save_to_cvs


def get_embeddings(data, model):
    """
    :param data: (list) list of graphs for those we want to get Embeddings
    :param model: (model) model that will be used to learn Embeddings
    :return: (numpy array) Embeddings
    """
    model.fit(data)
    X = model.get_embedding()
    return X


def multiply_embeddings(data, data_label, models=[GL2Vec, Graph2Vec],
                        dimensions=[2 ** 6, 2 ** 7, 2 ** 8, 2 ** 9, 2 ** 10]):
    """
    This function return a list of embeddings for given dimensions and given models
    :return: (list, list) - list of embeddings and list of names for each space
    """
    embeddings = []
    names = []

    for idx, model in enumerate(models):
        for dimension in dimensions:
            embeddings.append(get_embeddings(data, model(dimensions=dimension)))
            names.append('{}_model_{}_{}'.format(data_label, str(idx + 1), str(dimension)))
    return embeddings, names


def get_all_graphs(extension=''):
    """
    This function gets dep. and control flow graphs for both benchmarks and all returns corresponding kernel names
    """
    tsvc_control_flow, tsvc_control_names = control_flow_graph_extraction(Control_flow(), tsvc_benchmark.cfg_graphs,
                                                                          extension)
    poly_control_flow, poly_control_names = control_flow_graph_extraction(Control_flow(),
                                                                          polybench_benchmark.cfg_graphs, extension)
    generated_control_flow, generated_control_names = control_flow_graph_extraction(Control_flow(),
                                                                                    generated_benchmark.cfg_graphs,
                                                                                    extension)

    features_poly, poly_dep_graph_names, poly_dep_graphs = dep_graph_handcrafted_features_extraction(Dependencies(),
                                                                                                     polybench_benchmark.dep_graphs,
                                                                                                     extension,
                                                                                                     polybench_benchmark.dep_graphs_features)
    features_tsvc, tsvc_dep_graph_names, tsvc_dep_graphs = dep_graph_handcrafted_features_extraction(Dependencies(),
                                                                                                     tsvc_benchmark.dep_graphs,
                                                                                                     extension,
                                                                                                     tsvc_benchmark.dep_graphs_features,
                                                                                                     False)

    features_generated, generated_dep_graph_names, generated_dep_graphs = dep_graph_handcrafted_features_extraction(
        Dependencies(),
        generated_benchmark.dep_graphs,
        extension,
        generated_benchmark.dep_graphs_features,
        False)

    control_flow_graphs = poly_control_flow + tsvc_control_flow + generated_control_flow
    dep_graphs = poly_dep_graphs + tsvc_dep_graphs + generated_dep_graphs
    control_names = poly_control_names + tsvc_control_names + generated_control_names
    dep_names = poly_dep_graph_names + tsvc_dep_graph_names + generated_dep_graph_names
    return control_flow_graphs, control_names, dep_graphs, dep_names


def compute_graph_characteristics(control_flow_graphs, control_names, dep_graphs, dep_names):
    """
    This function computes some graph characteristics for both benchmarks
    :param control_flow_graphs: list, list of control flow graphs
    :param control_names: list, list of names corresponding to control flow graphs
    :param dep_graphs: list, list of dependence graphs
    :param dep_names: list, list of names corresponding to dependence graphs
    :return: (dict, dict) each dictionary contains kernel name as value, dict of characteristics as value. Two dictionaries
    correspond to characteristics for 2 types of graphs: Dependence and Control Flow
    """
    number_of_nodes_control_graph = [nx.number_of_nodes(G) for G in control_flow_graphs]
    number_of_edges_control_graph = [nx.number_of_edges(G) for G in control_flow_graphs]

    characteristics_control_flow = {}
    for idx, control_name in enumerate(control_names):
        characteristics_control_flow[control_name] = {'Edges_control': number_of_edges_control_graph[idx],
                                                      'Nodes_control': number_of_nodes_control_graph[idx],
                                                      'label': control_name
                                                      }

    scc_dependence_graph = [nx.number_strongly_connected_components(G) for G in dep_graphs]
    scc_size_dependence_graph = [
        len(max(nx.strongly_connected_components(G), key=len)) if nx.number_of_edges(G) > 0 else 0 for G in dep_graphs]
    number_of_nodes_dependence_graph = [nx.number_of_nodes(G) for G in dep_graphs]
    number_of_edges_dependence_graph = [nx.number_of_edges(G) for G in dep_graphs]

    characteristics_dependence_graph = {}
    for idx, control_name in enumerate(dep_names):
        characteristics_dependence_graph[control_name] = {'Edges_dep': number_of_edges_dependence_graph[idx],
                                                          'Nodes_dep': number_of_nodes_dependence_graph[idx],
                                                          'Number_of_SCC': scc_dependence_graph[idx],
                                                          'Nodes in the larges SCC': scc_size_dependence_graph[idx],
                                                          'label': control_name
                                                          }

    return characteristics_control_flow, characteristics_dependence_graph


def create_embeddings(control_flow_graphs, control_names, dep_graphs, dep_names):
    """
    This function creates all possible combinations of embeddings and stores them to csv
    :param control_flow_graphs: list, list of control flow graphs
    :param control_names: list, list of names corresponding to control flow graphs
    :param dep_graphs: list, list of dependence graphs
    :param dep_names: list, list of names corresponding to dependence graphs
    :return: list, list of numpy arrays - embeddings
    """
    data_frames = []
    control_flow_embeddings = multiply_embeddings(control_flow_graphs, 'control')
    dep_graph_embeddings = multiply_embeddings(dep_graphs, 'dependencies')
    names = control_flow_embeddings[1] + dep_graph_embeddings[1]

    for embedding in control_flow_embeddings[0]:
        df = pd.DataFrame(embedding)
        df['label'] = control_names
        data_frames.append(df)

    for embedding in dep_graph_embeddings[0]:
        df = pd.DataFrame(embedding)
        df['label'] = dep_names
        data_frames.append(df)

    for idx, df in enumerate(data_frames):
        df.to_csv(os.path.join(features_path, names[idx]))

    return data_frames


def main():
    all_graph_information = get_all_graphs()
    characteristics_control_flow, characteristics_dependence_graph = compute_graph_characteristics(
        *all_graph_information)
    save_to_cvs(list(characteristics_dependence_graph.values()), dep_graph_characteristics)
    save_to_cvs(list(characteristics_control_flow.values()), control_graph_characteristics)
    create_embeddings(*all_graph_information)


if __name__ == '__main__':
    main()
