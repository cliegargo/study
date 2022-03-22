# https://www.codewars.com/kata/5208f99aee097e6552000148/train/python


import re

def solution(s):
    camel = re.findall(r'^[a-z$]+', s)
    case = re.findall(r'[A-Z][^A-Z]+', s)

    return ' '.join([i for i in (camel + case)])


if __name__ == '__main__':
    s = input()
    print(solution(s))
