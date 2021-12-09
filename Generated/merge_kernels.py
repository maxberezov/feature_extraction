import os
from auxiliary_functions import get_content
from settings import generated_benchmark


def get_static_allocation(line):
    """
    The most important action is to replace dynamic allocation of arrays by static (better for PIPS) +
    deletion of excess lines
    :param line: line to be processed
    :return: processed line
    """
    patterns = ['deallocate_', 'clock_t', 'srand', 'printf']
    if any(pattern in line for pattern in patterns):
        return ''
    elif 'int *' in line:
        constant = 1000
        array_name = line[line.rfind('*') + 1:line.rfind('*') + 2]
        dimension = line.count('*')
        brackets = '[{}]'.format(constant) * dimension
        return 'int {}{};'.format(array_name, brackets)
    else:
        return line


def merge_all(dir_path, output_file, include_file,functions):
    """
    This function generates .c file with all functions
    :param dir_path: path, path to the dir with all .c files
    :param output_file: path, path of the output file
    :param include_file: path, path to the file with includes
    :param functions: path, path to the file with all functions
    """
    os.system('cat {} > {}'.format(include_file, output_file))
    for file in os.listdir(dir_path):
        if file.endswith(".c") and '%' not in file and len(get_content(os.path.join(dir_path, file))) > 100:
            kernel_name = file[:file.rfind('.')].replace('.', '')
            content = get_function(os.path.join(dir_path, file), kernel_name)
            content = [get_static_allocation(element) for element in content]
            new_function_name = content[0][:4] + kernel_name + '()'
            content[0] = new_function_name
            open(output_file, 'a').write('\n'.join(content) + '\n')
            os.system('echo {} >> {}'.format(kernel_name, functions))

    main_content = function_main(functions)
    open(output_file, 'a').write('\n'.join(main_content) + '\n')


def function_main(file_with_functions):
    """
    This function forms main function based on the list of all functions.
    We need to be sure that there will be a function call in main for each function
    :return: list, list of strings, each string is a line in main
    """
    main_content = ['int main()', '{','int call_var = 0;']
    functions = get_content(file_with_functions)
    for function in functions:
        main_content.append('call_var = {}();'.format(function))
    main_content.append('return 0;')
    main_content.append('}')
    return main_content


def get_function(file, kernel_name):
    """
    This function finds meaningful for us content based on preprocessed file
    :param file: path, path to the preprocessed file
    :param kernel_name: string, name of the computational kernel in this file
    :return: list, list of strings, each string is a line of meaningful for us content of the preprocessed file
    """
    start_string = 'int main(int argc, const char *argv[])'
    end_string = 'return 0;'
    content = get_content(file)
    start_index = content.index(start_string)
    end_index = content.index(end_string)
    first_clock = content.index('clock_t start = clock();')
    last_clock = content.index('clock_t stop = clock();')
    function = content[start_index:first_clock + 1] + content[first_clock + 2:last_clock - 2] + content[
                                                                                                last_clock:end_index + 2]
    inner_loop_index = [idx for idx, s in enumerate(function) if 'inner' in s][0]
    new_label = kernel_name + function[inner_loop_index][5:]
    function[inner_loop_index] = new_label
    return function


def main():
    merge_all(generated_benchmark.benchmark, generated_benchmark.merged, generated_benchmark.includes, generated_benchmark.functions)


if __name__ == '__main__':
    main()
