# https://www.codewars.com/kata/5a626fc7fd56cb63c300008c/train/python


import re

def uncollapse(digits):
    uncollapsed = re.findall(r'(zero|one|two|three|four|five|six|seven|eight|nine)', digits)

    return ''.join([str(i + ' ') for i in uncollapsed]).strip()


if __name__ == '__main__':
    digits = input()

    print(uncollapse(digits))
