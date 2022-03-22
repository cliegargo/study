# https://www.codewars.com/kata/567bf4f7ee34510f69000032/train/python


import re

def is_digit(n):
    return True if(re.fullmatch(r"^[0-9]", n)) else False


if __name__ == "__main__":
    n = input()
    print(is_digit(n))