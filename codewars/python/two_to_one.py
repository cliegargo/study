# https://www.codewars.com/kata/5656b6906de340bd1b0000ac/train/python


def longest(a1, a2):
    count = {}

    for i in a1:
        if i in count.keys():
            count[i] += 1
        else:
            count[i] = 1

    for i in a2:
        if i in count.keys():
            count[i] += 1
        else:
            count[i] = 1

    return ''.join(sorted([i for i in count.keys()]))


if __name__ == '__main__':
    a1 = input()
    a2 = input()

    print(longest(a1, a2))
