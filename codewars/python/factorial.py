# https://www.codewars.com/kata/57a049e253ba33ac5e000212/train/python


def factorial(n):
    factorial = 1

    for i in range(1, n + 1):
        factorial *= i

    return factorial


if __name__ == "__main__":
    n = int(input())
    print(factorial(n))
