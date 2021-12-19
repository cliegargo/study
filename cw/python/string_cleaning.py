# https://www.codewars.com/kata/57e1e61ba396b3727c000251/train/python


import re

def string_clean(s):
    return re.sub(r"[\d]+", "", s)


if __name__ == "__main__":
    s = input()
    print(string_clean(s))