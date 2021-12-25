# https://www.codewars.com/kata/5866fc43395d9138a7000006/train/python

def ensure_question(s):
    return s + '?' if s[-1:] != '?' else s


if __name__ == '__main__':
    s = input()
    print(ensure_question(s))
