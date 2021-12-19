# https://www.codewars.com/kata/59fca81a5712f9fa4700159a/train/python


def to_binary(n):
    return int(bin(n)[2:])


if __name__ == "__main__":
    n = int(input())
    print(to_binary(n))
