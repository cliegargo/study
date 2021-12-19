# https://www.codewars.com/kata/5840586b5225616069000001/train/python


def highest_value(a, b):
    a_val = []

    for i in a:
        a_val.append(ord(i))

    b_val = []

    for i in b:
        b_val.append(ord(i))

    if sum(a_val) > sum(b_val) or sum(a_val) == sum(b_val):
        return a
    else:
        return b


if __name__ == "__main__":
    a = input()
    b = input()

    print(highest_value(a, b))