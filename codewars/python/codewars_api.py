# https://www.codewars.com/kata/5a6b80cb880385a8f7000089/train/python


import requests
from urllib.request import urlopen
from bs4 import BeautifulSoup
import re

def get_codeChallenges(n):
    leaders = urlopen('https://www.codewars.com/users/leaderboard')

    parse = BeautifulSoup(leaders.read(), 'html.parser')
    a = parse.find_all('a', href=True)

    users = [re.findall(r'users/[\S]+\"', str(a[i])) for i in range(12, len(a) - 7) if 'users' in str(a[i])]
    user = ''.join(users[n-1])[:-1]

    user_stats = f'https://www.codewars.com/api/v1/{user}'
    response = requests.get(user_stats)
    data = response.json()

    return [data['codeChallenges']['totalAuthored'], data['codeChallenges']['totalCompleted']]


if __name__ == '__main__':
    #n = int(input())
    nn = [1, 2, 3]
    for n in nn:
        print(get_codeChallenges(n))
