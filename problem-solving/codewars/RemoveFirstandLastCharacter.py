# Remove First and Last Character


def remove_char(s):
    # [1:]  - Remove first character
    # [:-1] - Remove last character
    return (s[1:][:-1])


def main():
    s = input()

    print(remove_char(s))


if __name__ == '__main__':
    main()
