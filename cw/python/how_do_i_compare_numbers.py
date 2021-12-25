# https://www.codewars.com/kata/55d8618adfda93c89600012e/train/python


def what_is(x):
    if x is 42:
        return 'everything'
    elif x == 42 * 42:
        return 'everything squared'
    else:
        return 'nothing'


if __name__ == '__main__':
    x = int(input())
    print(what_is(x))
