# https://www.codewars.com/kata/56b3b27cadd4ad275500000c/train/python


import re

def word_count(s):
    words = re.findall(r'[a-zA-Z]+', s.lower())
    to_count = [re.sub(r'(\ba\b|\bthe\b|\bon\b|\bat\b|\bof\b|\bupon\b|\bin\b|\bas\b)', '', i) for i in words]

    return len([i for i in to_count if i != ''])


if __name__ == '__main__':
    s = input()
    print(word_count(s))
