import os

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))
features_path = os.path.join(PROJECT_PATH, 'Features')
dep_graph_characteristics = os.path.join(features_path, 'dep_graph_characteristics')
control_graph_characteristics = os.path.join(features_path, 'control_graph_characteristics')


class Benchmark:
    def __init__(self):
        self.path = ''
        self.benchmark = ''
        self.functions = ''
        self.merged = ''
        self.dep_graphs = ''
        self.cfg_graphs = ''
        self.handcrafted_features = ''
        self.dep_graphs_features = ''
        self.utilities = ''
        self.source_code = ''
        self.unrolled = ''
        self.additional_source = ''
        self.includes = ''
        self.bounds = None
        self.names = None


tsvc_benchmark = Benchmark()
tsvc_benchmark.path = os.path.join(PROJECT_PATH, 'TSVC')
tsvc_benchmark.benchmark = os.path.join(tsvc_benchmark.path, 'Benchmark', 'src')
tsvc_benchmark.functions = os.path.join(tsvc_benchmark.benchmark, 'functions.txt')
tsvc_benchmark.merged = os.path.join(tsvc_benchmark.benchmark, 'tsvc_preprocessed_for_ast_parsing.c')
tsvc_benchmark.dep_graphs = os.path.join(tsvc_benchmark.path, 'Dependence_graphs')
tsvc_benchmark.cfg_graphs = os.path.join(tsvc_benchmark.path, 'CFG')
tsvc_benchmark.handcrafted_features = os.path.join(features_path, 'tsvc_ast_features')
tsvc_benchmark.dep_graphs_features = os.path.join(features_path, 'tsvc_handcrafted_dep_graph')
tsvc_benchmark.source_code = os.path.join(tsvc_benchmark.benchmark, 'tsvc_no_main.c')

polybench_benchmark = Benchmark()
polybench_benchmark.path = os.path.join(PROJECT_PATH, 'Polybench', 'poly_preprocessed')
polybench_benchmark.merged = os.path.join(PROJECT_PATH, 'Polybench', 'unrolled', 'merged_kernels.c')
polybench_benchmark.dep_graphs = os.path.join(PROJECT_PATH, 'Polybench', 'Dependence_graphs')
polybench_benchmark.handcrafted_features = os.path.join(features_path, 'poly_ast_features')
polybench_benchmark.dep_graphs_features = os.path.join(features_path, 'poly_handcrafted_dep_graph')
polybench_benchmark.cfg_graphs = os.path.join(PROJECT_PATH, 'Polybench', 'CFG')
polybench_benchmark.utilities = os.path.join(polybench_benchmark.path, 'utilities')
polybench_benchmark.functions = os.path.join(polybench_benchmark.utilities, 'benchmark_list')
polybench_benchmark.source_code = os.path.join(polybench_benchmark.utilities, 'polybench.c')
polybench_benchmark.unrolled = os.path.join(PROJECT_PATH, 'Polybench', 'unrolled')
polybench_benchmark.bounds = [[(9, 16), (25, 37), (46, 53), (62, 73)], [(6, 14), (22, 27), (35, 46)], [(13, 23)],
                              [(7, 12), (20, 25), (34, 36), (44, 49)], [(6, 17)], [(15, 26)], [(12, 23)], [(12, 22)],
                              [(14, 22)],
                              [(7, 8), (15, 23)], [(7, 9), (16, 25)], [(6, 17)], [(7, 21)], [(15, 31)], [(8, 25)],
                              [(6, 19)], [(8, 24), (32, 38), (46, 52)], [(6, 13)], [(26, 57)], [(5, 27)], [(6, 28)],
                              [(6, 15)], [(6, 19)], [(6, 15)], [(6, 15)], [(6, 27)],
                              [(6, 10), (16, 20)], [(7, 15), (22, 30)], [(7, 15), (23, 31), (39, 45)],
                              [(22, 33), (41, 54), (62, 67), (75, 86), (95, 108), (116, 121)]]

polybench_benchmark.names = ['correlation', 'covariance', 'gemm', 'gemver', 'gesummv', 'symm', 'syr2k', 'syrk',
                             'trmm', 'atax', 'bicg', 'doitgen', 'cholesky', 'durbin', 'gramschmidt', 'lu',
                             'ludcmp', 'trisolv', 'adi',
                             'fdtd_2d', 'heat_3d', 'jacobi_1d', 'jacobi_2d', 'seidel_2d', 'floyd_warshall',
                             'nussinov', 'mvt', '2mm', '3mm', 'deriche']

generated_benchmark = Benchmark()
generated_benchmark.path = os.path.join(PROJECT_PATH, 'Generated')
generated_benchmark.benchmark = os.path.join(generated_benchmark.path, 'src')
generated_benchmark.merged = os.path.join(generated_benchmark.path, 'merged_for_parsing.c')
generated_benchmark.cfg_graphs = os.path.join(generated_benchmark.path, 'CFG')
generated_benchmark.handcrafted_features = os.path.join(features_path, 'generated_ast_features')
generated_benchmark.dep_graphs = os.path.join(generated_benchmark.path, 'Dependence_graphs')
generated_benchmark.dep_graphs_features = os.path.join(features_path, 'generated_handcrafted_dep_graph')
generated_benchmark.functions = os.path.join(generated_benchmark.path, 'functions')
generated_benchmark.additional_source = os.path.join(generated_benchmark.path, 'init_array_lib', 'init_dyn_array.c')
generated_benchmark.includes = os.path.join(generated_benchmark.path, 'includes.txt')
generated_benchmark.source_code = os.path.join(generated_benchmark.path, 'merged.c')
