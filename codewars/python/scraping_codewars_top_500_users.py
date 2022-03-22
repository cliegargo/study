from urllib.request import urlopen
from bs4 import BeautifulSoup
import re


URL = "https://www.codewars.com/users/leaderboard"

class LeaderboardPosition():
    def __init__(self, position):
        self.position = position

class Leaderboard():
    def __init__(self, name, clan, honor):
        self.name = name
        self.clan = clan
        self.honor = honor

    def return_(self):
        return (self.position[0].name)


def solution():
    html = urlopen(URL)
    parse = BeautifulSoup(html.read(), 'html.parser')

    leaders = parse.find_all('tr', attrs={'data-username': True})
    #usernames = [re.findall(r'data-username=\"(.+?)\"', str(users[u])) for u in range(len(users))]

    users = []
    position = {}
    leaderboard = Leaderboard()

    pos = 1
    for i in range(len(leaders)):
        name = ''.join(re.findall(r'data-username=\"(.+?)\"', str(leaders[i])))
        clan = ''.join(list(leaders[i])[2])
        honor = int(''.join(list(leaders[i])[3]).replace(',', ''))
        #users.append(Leaderboard(name, clan, honor))
        position[pos] = Leaderboard(name, clan, honor)
        #users.append({'position': i + 1, 'name': user, 'clan': clan, 'honor': honor})
    #leaderboard = LeaderBoard(users)
    #return leaderboard
    #print(users[6 - 1])
    print(leaderboard)



if __name__ == '__main__':
    users = solution()
    print(users)

    #leaderboard = Leaderboard()
    #print(leaderboard[1].name)
