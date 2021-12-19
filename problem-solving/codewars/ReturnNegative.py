# Return Negative


def make_negative(number):
    if number > 0:
        number = -number # Make 'number' negative
        return number
    else:
        return number


def main():
    number = int(input())

    print(make_negative(number))


if __name__ == '__main__':
    main()
