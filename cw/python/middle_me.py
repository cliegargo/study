# https://www.codewars.com/kata/59cd155d1a68b70f8e000117/train/python


def middle_me(N, X, Y):
    return str((Y * (N // 2)) + X + (Y * (N // 2))) if (N % 2 == 0) else X


if __name__ == "__main__":
    X = input()
    Y = input()
    N = int(input())
    print(middle_me(N, X, Y))