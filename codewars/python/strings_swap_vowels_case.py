# https://www.codewars.com/kata/5803c0c6ab6c20a06f000026/train/python


def swap_vowel_case(st):
    swapped = ""

    for i in st:
        if i in "aeouiAEOUI":
            if i.isupper():
                swapped += i.lower()
            elif i.islower():
                swapped += i.upper()
        else:
            swapped += i

    return swapped


if __name__ == "__main__":
    st = input()
    print(swap_vowel_case(st))