import os
from settings import poly_unrolled_path
from settings import merged_poly_file


def compile_all(dir_path, output_file):
    directories = os.listdir(dir_path)
    for dir in directories:
        if '.database' in dir:
            kernel_name = dir[:dir.rfind('_')]
            relative_path_to_dir = '{}!kernel_{}'.format(kernel_name, kernel_name)
            filename = relative_path_to_dir + '.pre.c'
            preprocessed_file = os.path.join(dir_path, dir, relative_path_to_dir, filename)
            os.system('chmod u+r+x {}'.format(preprocessed_file))
            os.system('cat ' + preprocessed_file + '>>' + output_file)


def main():
    compile_all(poly_unrolled_path, merged_poly_file)


if __name__ == '__main__':
    main()
