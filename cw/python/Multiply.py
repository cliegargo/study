# Multiply


def multiply(a, b):
    return (a * b)


def main():
    a, b = [int(x) for x in input().split()]

    print(multiply(a, b))


if __name__ == '__main__':
    main()
