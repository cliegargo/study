# https://www.codewars.com/kata/58039f8efca342e4f0000023/train/python


import re

def changer(s):
    switched = ""

    for i in s:
        if i.isalpha():
            value = ord(i) + 1
            if i.isupper():
                if value > 90:
                    value -= 26
            else:
                if value > 122:
                    value -= 26

            if re.match("[a|e|i|o|u|A|E|I|O|U]+", chr(value)):
                switched += chr(value).upper()
            else:
                switched += chr(value).lower()
        else:
            switched += i

    return switched





if __name__ == "__main__":
    s = input()
    print(changer(s))
