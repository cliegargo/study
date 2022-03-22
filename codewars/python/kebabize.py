# https://www.codewars.com/kata/5208f99aee097e6552000148/train/python


import re

def kebabize(string):
    if string.isupper():
        return '-'.join([i.lower() for i in string])
    else:
        camel = re.findall(r'^[a-z$]+', string)
        case = re.findall(r'[A-Z]+[^A-Z]+', string)

        return re.sub(r'\d+', '', '-'.join([i.lower() for i in camel+case]))



if __name__ == '__main__':
    string = input()
    print(kebabize(string))
