# https://www.codewars.com/kata/5412509bd436bd33920011bc/train/python


import re

def maskify(cc):
    return cc if (len(cc) <= 4) else re.sub(r"[a-zA-Z0-9$]", "#", cc[:-4]) + cc[len(cc) - len(cc[:4]):]


if __name__ == "__main__":
    cc = input()
    print(maskify(cc))