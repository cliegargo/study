# Opposite number


def opposite(number):
    if number > 0:
        number = -number
        return number
    elif number < 0:
        number = abs(number)
        return number
    else:
        return 0


def main():
    number = int(input())

    print(opposite(number))


if __name__ == '__main__':
    main()
