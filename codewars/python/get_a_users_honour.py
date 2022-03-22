# https://www.codewars.com/kata/58a9cff7ae929e4ad1000050/train/python


from urllib.request import urlopen
from bs4 import BeautifulSoup


def get_honor(username):
    url = f'https://codewars.com/users/{username}/stats'

    html = urlopen(url)
    soup = BeautifulSoup(html.read(), 'html.parser')

    divs = soup.find_all('div', class_='stat')

    for texts in divs:
        if 'Honor:' in str(texts):
            return int(str(texts)[31:-6].replace(',', ''))





if __name__ == '__main__':
    username = input()
    print(get_honor(username))
