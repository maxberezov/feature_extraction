from auxiliary_functions import save_to_cvs
from ast_parsing import AST_parsing
from settings import tsvc_benchmark, polybench_benchmark, generated_benchmark


def ast_extraction_pipeline(benchmark):
    """
    This function extracts handcrafted features from a given benchmark and saves them to a csv
    :param benchmark: benchmark object, benchmark to extract features
    """
    ast_parsing = AST_parsing()
    ast_features = ast_parsing.get_features(benchmark.merged)
    save_to_cvs(list(ast_features.values()), benchmark.handcrafted_features)


def main():
    ast_extraction_pipeline(generated_benchmark)
    ast_extraction_pipeline(polybench_benchmark)
    ast_extraction_pipeline(tsvc_benchmark)


if __name__ == '__main__':
    main()
