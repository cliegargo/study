# https://www.codewars.com/kata/57faf12b21c84b5ba30001b0/train/python


def remove(s):
    return s.replace("!", "") + "!"


if __name__ == "__main__":
    s = input()
    print(remove(s))