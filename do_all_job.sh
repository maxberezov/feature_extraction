#!/bin/sh
python collect_ast_features.py
python collect_dep_graph_features.py
python embeddings.py
python merge_dataframes.py