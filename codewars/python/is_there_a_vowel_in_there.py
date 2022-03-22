# https://www.codewars.com/kata/57cff961eca260b71900008f/train/python


def is_vow(inp):
    arr = []

    for i in range(len(inp)):
        if inp[i] in ('a', 'e', 'i', 'o', 'u'):
            arr.append(ord(inp[i]))
        elif inp[i] in (97, 101, 105, 111, 117):
            arr.append(chr(inp[i]))
        else:
            arr.append(inp[i])

    return arr


if __name__ == "__main__":
    n = int(input())
    inp = []
    for i in range(n):
        i = input()
        inp.append(i)
    print(is_vow(inp))
