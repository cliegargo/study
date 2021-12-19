# https://www.codewars.com/kata/50654ddff44f800200000007/train/python


def solution(a, b):
    if len(a) > len(b):
        return f"{b}{a}{b}"
    else:
        return f"{a}{b}{a}"


if __name__ == "__main__":
    a, b = input()
    print(solution(a, b))
