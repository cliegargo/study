# https://www.codewars.com/kata/545cedaa9943f7fe7b000048/train/python


def is_pangram(s):
    s = s.lower()

    lst = []
    for i in s:
        lst.append(i)

    counter = {}
    for j in range(len(lst)):
        counter[s[j]] = lst.count(s[j])

    alpha = "abcdefghijklmnopqrstuvwxyz"

    ispangram = 0
    for k, l in counter.items():
        if k in alpha and l > 0:
            ispangram += 1
        else:
            ispangram += 0

    if ispangram == 26:
        return True
    else:
        return False


if __name__ == "__main__":
    s = input()
    print(is_pangram(s))