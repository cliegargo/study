# Incorrect division method


def divide_numbers(x, y):
    return (x / y)


def main():
    x, y = [int(i) for i in input().split()]

    output = divide_numbers(x, y)

    print(output)


if __name__ == '__main__':
    main()
