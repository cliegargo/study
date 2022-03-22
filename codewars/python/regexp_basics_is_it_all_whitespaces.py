# https://www.codewars.com/kata/567de8823fa5eee02100002a/train/python


import re

def whitespace(string):
    return True if (re.fullmatch(r"(\t| |\n|\r)*", string)) else False


if __name__ == "__main__":
    string = input()
    print(whitespace(string))