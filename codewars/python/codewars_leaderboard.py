# https://www.codewars.com/kata/5a57d101cadebf03d40000b9/train/python


from urllib.request import urlopen
from bs4 import BeautifulSoup
import re

def get_leaderboard_honor():
    html = urlopen('https://www.codewars.com/users/leaderboard')
    parse = BeautifulSoup(html.read(), 'html.parser')

    users = parse.find_all('tr', attrs={'data-username': True})
    honours = [re.findall(r'[\d]+', str(list(u)[3]).replace(',', '')) for u in users]

    return [int(''.join(h)) for h in honours]






if __name__ == '__main__':
    print(get_leaderboard_honor())
