# https://www.codewars.com/kata/5286b2e162056fd0cb000c20/train/python


def collatz(n):
    sequence = str(n) + "->"

    while(n != 1):
        if n % 2 == 0:
            n = n // 2
            sequence += str(n) + "->"
        else:
            n = n * 3 + 1
            sequence += str(n) + "->"

    return sequence[:-2]


if __name__ == "__main__":
    n = int(input())
    print(collatz(n))