# https://www.codewars.com/kata/56b1f01c247c01db92000076/train/python


def double_char(s):
    doubled = ""

    for i in s:
        doubled += i * 2

    return doubled


if __name__ == "__main__":
    s = input()
    print(double_char(s))