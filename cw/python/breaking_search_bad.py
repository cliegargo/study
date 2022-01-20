# https://www.codewars.com/kata/52cd53948d673a6e66000576/train/python


import re

def search(titles, term):
    return [i for i in titles if re.findall(term, i.lower())]


if __name__ == '__main__':
    titles = ['Rocky 1', 'Rocky 2', 'My Little Poney']
    term = 'ock'
    print(search(titles, term))
