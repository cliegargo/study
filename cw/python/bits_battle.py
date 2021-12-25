# https://www.codewars.com/kata/58856a06760b85c4e6000055/train/python


def bits_battle(numbers):
    if len(numbers) == 0:
        return 'tie'
    else:
        even = [bin(i).replace('0b', '') for i in numbers if i % 2 == 0]
        odd = [bin(i).replace('0b', '') for i in numbers if i % 2 != 0]

        odds = len([j for i in odd for j in i if j == '1'])
        evens = len([j for i in even for j in i if j == '0'])

        if odds > evens:
            return 'odds win'
        elif odds < evens:
            return 'evens win'
        else:
            return 'tie'


if __name__ == '__main__':
    #numbers = [5, 3, 14]
    numbers = [1, 13, 16]
    print(bits_battle(numbers))
