# https://www.codewars.com/kata/5831c204a31721e2ae000294/train/python


def swap(st):
    vowel = {'a': 'A', 'e': 'E', 'i': 'I', 'o': 'O', 'u': 'U'}

    return ''.join([vowel.get(i) if i in vowel.keys() else i for i in st])





if __name__ == "__main__":
    st = input()
    print(swap(st))
