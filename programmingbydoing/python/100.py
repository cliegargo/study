# Distance Formula
#
# Formula: https://en.wikipedia.org/wiki/Distance#Geometry

import math

def calculate(x1, y1, x2, y2):
    d = math.sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))

    return d;

def main():
    x1, y1, x2, y2 = [int(x) for x in input().split()]

    print(calculate(x1, y1, x2, y2))


if __name__ == "__main__":
    main()
