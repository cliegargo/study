# https://www.codewars.com/kata/55491e9e50f2fc92f3000074/train/python


import string
import math

def ride(group, comet):
    val_group = [string.ascii_uppercase.index(group[i]) + 1 for i in range(len(group))]
    val_comet = [string.ascii_uppercase.index(comet[i]) + 1 for i in range(len(comet))]

    if math.prod(val_group) % 47 == math.prod(val_comet) % 47:
        return "GO"
    else:
        return "STAY"


if __name__ == '__main__':
    group = input()
    comet = input()

    print(ride(group, comet))
