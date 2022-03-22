# https://www.codewars.com/kata/55b42574ff091733d900002f/train/python


def friend(x):
    friend = []

    for i in range(len(x)):
        if len(str(x[i])) == 4:
            friend.append(x[i])

    return friend


if __name__ == "__main__":
    l = int(input())
    x = []
    for i in range(l):
        i = input()
        x.append(i)

    print(friend(x))