# https://www.codewars.com/kata/56a946cd7bd95ccab2000055/train/python


import re

def lowercase_count(string):
    return len(''.join(re.findall(r'[a-z]+', string)))



if __name__ == '__main__':
    string = input()
    print(lowercase_count(string))
