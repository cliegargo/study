# https://www.codewars.com/kata/587731fda577b3d1b0001196/train/python


def camel_case(string):
    return string.title().replace(" ", "")


if __name__ == "__main__":
    string = input()
    print(camel_case(string))