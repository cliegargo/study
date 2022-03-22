# https://www.codewars.com/kata/58ca658cc0d6401f2700045f/train/python


def find_multiples(integer, limit):
    multiples = []

    for i in range(integer, limit + 1):
        if i % integer == 0:
            multiples.append(i)

    return multiples

if __name__ == '__main__':
    integer = int(input())
    limit = int(input())
    print(find_multiples(integer, limit))