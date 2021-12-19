# https://www.codewars.com/kata/567de72e8b3621b3c300000b/train/python


import re

def is_letter(s):
    return True if(re.fullmatch(r"^[a-z]|^[A-Z]", s)) else False

if __name__ == "__main__":
    s = input()
    print(is_letter(s))