import os

from auxiliary_functions import get_content, do_for_all_files_in_directory
from settings import polybench_util_path, polybech_poly_file_path, polybech_kernel_list, polybech_path, \
    poly_unrolled_path


def create_tpips_file(path):
    name = path[path.rfind('/') + 1:path.rfind('.')]
    name = name.replace('-', '_')
    database = name + '_' + 'baseline'

    current_directory = path[2:path.rfind('/')]
    tpips_file = ["delete {}".format(database),
                  "setenv PIPS_CPP_FLAGS -I {} -I {} -DPOLYBENCH_TIME".format(polybench_util_path, current_directory),
                  'setproperty ABORT_ON_USER_ERROR TRUE', 'setproperty MEMORY_EFFECTS_ONLY FALSE',
                  'create {} {} {}'.format(database, os.path.join(polybech_path, path[2:]), polybech_poly_file_path),
                  'apply UNSPLIT', 'close', 'quit']

    save = name + '_' + 'baseline' + '.tpips'

    with open(os.path.join(poly_unrolled_path, save), 'w+') as f:
        for item in tpips_file:
            f.write("%s\n" % item)


def create_tpips_for_all_files():
    content = get_content(polybech_kernel_list)
    for idx, cont in enumerate(content):
        create_tpips_file(cont)


def preprocess_single_file(file):
    command = 'tpips ' + file
    os.system(command)


def preprocess_files():
    do_for_all_files_in_directory(poly_unrolled_path, 'tpips', preprocess_single_file)


def main():
    create_tpips_for_all_files()
    preprocess_files()


if __name__ == '__main__':
    main()


def get_index(name):
    kernel_list = get_content(polybech_kernel_list)
    for idx, elem in enumerate(kernel_list):
        if name in elem:
            return idx
