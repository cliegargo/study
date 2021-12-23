# https://www.codewars.com/kata/58ab2ed1acbab2eacc00010e/train/python


from urllib.request import urlopen
from bs4 import BeautifulSoup
import re


def get_member_since(username):
    url = f'https://codewars.com/users/{username}'

    html = urlopen(url)
    soup = BeautifulSoup(html.read(), 'html.parser')

    divs = soup.find_all('div', class_='stat')

    for texts in divs:
        if 'Member Since' in str(texts):
            return str(texts)[38:-6]


if __name__ == '__main__':
    username = input()
    print(get_member_since(username))
