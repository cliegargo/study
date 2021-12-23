# https://www.codewars.com/kata/5a552ef7e6be3855270000bd/train/python


import os


def create_file_dict():
    filenames = os.listdir('.')

    files = {}

    for fn in filenames:
        if os.path.isfile(fn):
            with open(fn) as f:
                files[fn] = f.readline()

    return files

if __name__ == '__main__':
    print(create_file_dict())
