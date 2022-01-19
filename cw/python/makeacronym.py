# https://www.codewars.com/kata/557efeb04effce569d000022/train/python


import re

def make_acronym(phrase):
    if isinstance(phrase, (int, float, list, dict)) or phrase in([], {}):
        return "Not a string"
    elif re.search(r"[\d]+", str(phrase)):
        return "Not letters"
    else:
        acronym = ""

        for i in phrase.split():
            acronym += i[0]

        return acronym.upper()

if __name__ == "__main__":
    phrase = int(input())
    print(make_acronym(phrase))
