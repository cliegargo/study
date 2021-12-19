# https://www.codewars.com/kata/569e09850a8e371ab200000b/train/python


def pre_fizz(n):
    lst = []

    for i in range(1, n + 1):
        lst.append(i)

    return lst

if __name__ == "__main__":
    n = int(input())
    print(pre_fizz(n))