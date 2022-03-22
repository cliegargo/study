# https://www.codewars.com/kata/57eae20f5500ad98e50002c5/train/python

import re

def no_space(x):
    return re.sub(" ", "", x)

if __name__ == "__main__":
    x = input()
    print(no_space(x))