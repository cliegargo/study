# https://www.codewars.com/kata/557af9418895e44de7000053/train/python


def repeat_it(string, n):
    if isinstance(string, str):
        return (string * n)
    else:
        return "Not a string"


if __name__ == "__main__":
    t = input()
    n = int(input())
    if t == "s":
        string = input()
        print(repeat_it(string, n))
    else:
        string = int(input())
        print(repeat_it(string, n))
