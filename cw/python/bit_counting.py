# https://www.codewars.com/kata/526571aae218b8ee490006f4/train/python


def count_bits(n):
    bits = bin(n)[2:]

    counter = 0
    for i in bits:
        j = int(i)
        if j == 1:
            counter += 1

    return counter


if __name__ == "__main__":
    n = int(input())
    print(count_bits(n))
