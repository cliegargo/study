# https://www.codewars.com/kata/57a60bad72292d3e93000a5a/train/python


def to_acronym(input):
    return ''.join([i[0].upper() for i in input.split()])




if __name__ == "__main__":
    input = input()
    print(to_acronym(input))
