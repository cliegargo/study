# Even or Odd


def even_or_odd(number):
    if (number % 2 == 0):
        return "Even"
    else:
        return "Odd"


def main():
    number = int(input())

    print(even_or_odd(number))


if __name__ == '__main__':
    main()
