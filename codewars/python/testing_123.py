# https://www.codewars.com/kata/54bf85e3d5b56c7a05000cf9/train/python


def number(lines):
    line_num = []

    for num, line in enumerate(lines):
        line_num.append(f"{num + 1}: {line}")

    return line_num;


if __name__ == "__main__":
    n = int(input())
    lines = []
    for i in range(n):
        i = input()
        lines.append(i)
    print(number(lines))
