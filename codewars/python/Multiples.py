# Multiples


def multiple(x):
    if x % 3 == 0 and x % 5 == 0:
        return "BangBoom"
    elif x % 3 == 0:
        return "Bang"
    elif x % 5 == 0:
        return "Boom"
    else:
        return "Miss"


def main():
    x = int(input())

    print(multiple(x))


if __name__ == '__main__':
    main()
