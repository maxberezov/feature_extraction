from settings import control_graph_characteristics
from settings import dep_graph_characteristics
import pandas as pd
from settings import tsvc_benchmark, polybench_benchmark, generated_benchmark
from settings import features_path
import os

dependencies_poly = pd.read_csv(polybench_benchmark.dep_graphs_features)
dependencies_tsvc = pd.read_csv(tsvc_benchmark.dep_graphs_features)
dependencies_generated = pd.read_csv(generated_benchmark.dep_graphs_features)

control_graph_features = pd.read_csv(control_graph_characteristics)
dep_graph_features = pd.read_csv(dep_graph_characteristics)

ast_features_poly = pd.read_csv(polybench_benchmark.handcrafted_features)
ast_features_tsvc = pd.read_csv(tsvc_benchmark.handcrafted_features)
ast_features_generated = pd.read_csv(generated_benchmark.handcrafted_features)

dependencies_tsvc['label'] = dependencies_tsvc['label'].apply(lambda x: x[:x.find('_')])
ast_features_tsvc['label'] = ast_features_tsvc['label'].apply(lambda x: x[5:])

dependencies_generated['label'] = dependencies_tsvc['label'].apply(lambda x: x[:x.find('_')])
ast_features_generated['label'] = ast_features_tsvc['label'].apply(lambda x: x[5:])


control_embeddings_model_1 = pd.read_csv(os.path.join(features_path, 'control_model_1_128'), index_col=[0])
control_embeddings_model_2 = pd.read_csv(os.path.join(features_path, 'control_model_2_128'), index_col=[0])
dep_embeddings_model_1 = pd.read_csv(os.path.join(features_path, 'dependencies_model_1_128'), index_col=[0])
dep_embeddings_model_2 = pd.read_csv(os.path.join(features_path, 'dependencies_model_2_128'), index_col=[0])

list_to_preprocess = [dep_graph_features, control_graph_features]
embeddings = [control_embeddings_model_1, control_embeddings_model_2, dep_embeddings_model_1, dep_embeddings_model_2]

for element in list_to_preprocess:
    element['label'][51:] = element['label'][51:].apply(lambda x: x[:x.find('_')])

for element in embeddings:
    element['label'][51:] = element['label'][51:].apply(lambda x: x[:x.find('_')])

dep_embeddings_model_1.columns = ['dep_' + str(x) for x in range(128)] + ['label']
dep_embeddings_model_2.columns = ['dep_' + str(x) for x in range(128)] + ['label']
control_embeddings_model_1.columns = ['control_' + str(x) for x in range(128)] + ['label']
control_embeddings_model_2.columns = ['control_' + str(x) for x in range(128)] + ['label']

poly = pd.merge(dependencies_poly, ast_features_poly, on='label')
tsvc = pd.merge(dependencies_tsvc, ast_features_tsvc, on='label')
generated = pd.merge(dependencies_generated, ast_features_generated, on='label')

df_no_embedding = tsvc.append(poly, ignore_index=True)
df_no_embedding = df_no_embedding.append(generated, ignore_index=True)


graph_characteristics = pd.merge(dep_graph_features, control_graph_features, on='label')
df_no_embedding = pd.merge(df_no_embedding, graph_characteristics, on='label')

#############################
df_only_dep_graph_1 =  pd.merge(dep_embeddings_model_1, df_no_embedding, on='label')
df_only_dep_graph_2 = pd.merge(dep_embeddings_model_2, df_no_embedding, on='label')
df_only_control_graph_1 = pd.merge(control_embeddings_model_1, df_no_embedding, on='label')
df_only_control_graph_2 = pd.merge(control_embeddings_model_2, df_no_embedding, on='label')



################
df_embedding_model_1 = pd.merge(control_embeddings_model_1, dep_embeddings_model_1, on='label')
df_embedding_model_2 = pd.merge(control_embeddings_model_2, dep_embeddings_model_2, on='label')

df_embedding_model_1 = pd.merge(df_embedding_model_1, df_no_embedding, on='label')
df_embedding_model_2 = pd.merge(df_embedding_model_2, df_no_embedding, on='label')

#############

df_embedding_model_1.to_csv(os.path.join(features_path, 'embeddings_1'), index=False)
df_embedding_model_2.to_csv(os.path.join(features_path, 'embeddings_2'), index=False)
df_only_dep_graph_1.to_csv(os.path.join(features_path, 'dep_1'), index=False)
df_only_dep_graph_2.to_csv(os.path.join(features_path, 'dep_2'), index=False)
df_only_control_graph_1.to_csv(os.path.join(features_path, 'control_1'), index=False)
df_only_control_graph_2.to_csv(os.path.join(features_path, 'control_2'), index=False)
df_no_embedding.to_csv(os.path.join(features_path, 'hand_features'), index=False)
