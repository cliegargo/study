# https://www.codewars.com/kata/57aa218e72292d98d500240f/train/py

import math

def heron(a, b, c):
    s = (a + b + c) / 2
    return round(math.sqrt(s* (s - a) * (s - b) * (s - c)), 2)


def main():
    a, b, c = [int(x) for x in input().split()]

    print(heron(a, b, c))


if __name__ == "__main__":
    main()