# https://www.codewars.com/kata/583f158ea20cfcbeb400000a/train/python


def arithmetic(a, b, operator):
    if operator == "add":
        return a + b
    elif operator == "subtract":
        return a - b
    elif operator == "divide":
        return a / b
    elif operator == "multiply":
        return a * b


def main():
    a = int(input())
    b = int(input())
    operator = input()

    print(arithmetic(a, b, operator))

if __name__ == "__main__":
    main()
