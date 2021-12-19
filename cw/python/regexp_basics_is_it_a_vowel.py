# https://www.codewars.com/kata/567bed99ee3451292c000025/train/python


import re

def is_vowel(s):
    return True if(re.fullmatch(r"^[aeiou]", s.lower())) else False


if __name__ == "__main__":
    s = input()
    print(is_vowel(s))