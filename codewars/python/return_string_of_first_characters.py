# https://www.codewars.com/kata/5639bdcef2f9b06ce800005b/train/python


def make_string(s):
    return "".join([i[0] for i in s.split()])


if __name__ == "__main__":
    s = input()
    print(make_string(s))
