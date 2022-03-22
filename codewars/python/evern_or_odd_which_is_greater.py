# https://www.codewars.com/kata/57f7b8271e3d9283300000b4/train/python


def even_or_odd(s):
    n = []

    for i in s:
        n.append(int(i))

    even = 0
    odd = 0

    for j in n:
        if j % 2 == 0:
            even += j
        else:
            odd += j

    if even > odd:
        return "Even is greater than Odd"
    elif odd > even:
        return "Odd is greater than Even"
    else:
        return "Even and Odd are the same"



if __name__ == "__main__":
    s = input()
    print(even_or_odd(s))