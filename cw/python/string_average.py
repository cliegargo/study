# https://www.codewars.com/kata/5966847f4025872c7d00015b/train/python


def average_string(s):
    num = {
        'zero': 0, 'one': 1, 'two': 2, 'three': 3, 'four': 4, 'five': 5,
        'six': 6, 'seven': 7, 'eight': 8, 'nine': 9
    }

    vals = []

    for i in s.split():
        if i in num.keys():
            vals.append(num.get(i))
        else:
            return 'n/a'

    if len(vals) == 0:
        return 'n/a'
    else:
        res = sum(vals) // len(vals)
        return list(num.keys())[list(num.values()).index(res)]


if __name__ == '__main__':
    s = input()
    print(average_string(s))
