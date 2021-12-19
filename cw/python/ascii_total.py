# https://www.codewars.com/kata/572b6b2772a38bc1e700007a/train/python


def uni_total(s):
    return sum([ord(s[i]) for i in range(len(s))])

if __name__ == "__main__":
    s = input()
    print(uni_total(s))
