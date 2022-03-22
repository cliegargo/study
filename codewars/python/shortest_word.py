# https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/python


def find_short(s):
    return min([len(i) for i in s.split()])


if __name__ == "__main__":
    s = input()
    print(find_short(s))
