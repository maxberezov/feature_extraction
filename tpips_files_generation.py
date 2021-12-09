import os
from auxiliary_functions import rewrite, get_content
from settings import polybench_benchmark


def generate_flag_string(headers, flags):
    """
    This function generates a substring (which includes information about headers)
     of compilations string
    :param headers: [string,string..], list of strings. String describes a header to be added
    :param flags: [string,string..] list of strings. String describes a compilation flag to be added
    :return: string, the substring of compilation string
    """
    if len(flags) == 0 and len(headers) == 0:
        return ''
    else:
        flag_string = 'setenv PIPS_CPP_FLAGS '
        for header in headers:
            flag_string += '-I ' + header + ' '
        for flag in flags:
            flag_string += flag + ' '
        return flag_string


def create_tpips_with_gen_multi_recurse(source_code, function_name, folder_name, header_files=[], flags=[]):
    """
    :param source_code: list, [path1, path2,...] - all paths that we need to compile
    :param function_name: string, the name of the function in the source code that we want to observe
    :param folder_name: string, the name of the folder for tpips actions
    :param flags: compilation flags
    :param header_files: list, [path1, path2,...] - all paths to headers
    :return: list, contains tpips commands to get control flow graph for a given function 'function name'
    """
    tpips_file = ["delete {}".format(folder_name), generate_flag_string(header_files, flags),
                  "setproperty ABORT_ON_USER_ERROR TRUE",
                  "setproperty PREPROCESSOR_MISSING_FILE_HANDLING \"generate\"",
                  "setproperty FOR_TO_DO_LOOP_IN_CONTROLIZER TRUE",
                  "create  {} {}".format(folder_name, *source_code),
                  "apply GEN_MULTI_RECURSE_EXPLORER[{}]".format(function_name),
                  "apply UNSPLIT", "close", "quit"
                  ]
    tpips_file = [item for item in tpips_file if len(item) > 0]
    return tpips_file


def create_tpips_with_dependence_graph(source_code, function_name, folder_name, header_files=[], flags=[]):
    """
    :param source_code: list, [path1, path2,...] - all paths that we need to compile
    :param function_name: string, the name of the function in the source code that we want to observe
    :param folder_name: string, the name of the folder for tpips actions
    :param flags: compilation flags
    :param header_files: list, [path1, path2,...] - all paths to headers
    :return: list, contains tpips commands to get dependence graph for a given function 'function name'
    """

    tpips_file = ["delete {}".format(folder_name), generate_flag_string(header_files, flags),
                  "setproperty ABORT_ON_USER_ERROR TRUE",
                  "setproperty PREPROCESSOR_MISSING_FILE_HANDLING \"generate\"",
                  "setproperty FOR_TO_DO_LOOP_IN_CONTROLIZER TRUE",
                  "create  {}  {}".format(folder_name, *source_code),
                  "setproperty PRINT_DEPENDENCE_GRAPH_USING_SRU_FORMAT TRUE",
                  "apply PRINT_WHOLE_DEPENDENCE_GRAPH[{}]".format(function_name),
                  "display DG_FILE[{}]".format(function_name), "apply UNSPLIT", "close", "quit"
                  ]

    tpips_file = [item for item in tpips_file if len(item) > 0]
    return tpips_file


def generate_and_run_tpips_file(benchmark, source_code, function, function_to_create_tpips, tpips_operation,
                                headers=[], flags=[]):
    tpips_file_path = os.path.join(benchmark.benchmark, tpips_operation)
    tpips_file = function_to_create_tpips(source_code, function, tpips_operation, headers, flags)
    rewrite(tpips_file_path, tpips_file)
    output_symbol = lambda: '' if function_to_create_tpips == create_tpips_with_dependence_graph else '2'
    output_path = lambda: benchmark.dep_graphs if function_to_create_tpips == create_tpips_with_dependence_graph else benchmark.cfg_graphs
    os.system('tpips {} {}> {}'.format(tpips_file_path, output_symbol(),
                                       os.path.join(output_path(), tpips_operation) + '_' + function))


def generate_file_for_all_functions_polybench(benchmark, function_to_create_tpips, tpips_operation):
    """

    :param tpips_operation: the name of the tpips operation (e.x recurse, dep graph)
    :param benchmark: benchmark object, considering benchmark
    :param function_to_create_tpips: one of the functions that returns tpips_file
    """
    os.chdir(benchmark.path)
    kernel_list = get_content(benchmark.functions)
    for kernel in kernel_list:
        relative_kernel_path = kernel[2:]
        kernel_name = kernel[kernel.rfind('/') + 1:kernel.rfind('.')].replace('-', '_')
        kernel_path = os.path.join(benchmark.path, relative_kernel_path)
        function_name = 'kernel_' + kernel_name
        current_dir_path = os.path.join(benchmark.path, relative_kernel_path[:relative_kernel_path.rfind('/')])
        source_files = [kernel_path, polybench_benchmark.source_code]
        header_files = [polybench_benchmark.utilities, current_dir_path]
        flags = ['-DPOLYBENCH_TIME']
        generate_and_run_tpips_file(benchmark, source_files, function_name, function_to_create_tpips, tpips_operation,
                                    header_files, flags)


def generate_file_for_all_functions(benchmark, function_to_create_tpips, tpips_operation):
    """
    :param tpips_operation: the name of the tpips operation (e.x recurse, dep graph)
    :param benchmark: benchmark object, considering benchmark
    :param function_to_create_tpips: one of the functions that returns tpips_file
    """
    os.chdir(benchmark.benchmark)
    functions = get_content(benchmark.functions)
    for function in functions:
        generate_and_run_tpips_file(benchmark, [benchmark.source_code], function, function_to_create_tpips,
                                    tpips_operation)
