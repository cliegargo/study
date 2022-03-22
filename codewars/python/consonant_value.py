import re

def solve(s):
    s = re.sub(r'[a|e|i|o|u]+', '', s)
    print(s)


    alphabet = {
        'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8,
        'i': 9, 'j': 10, 'k': 11, 'l': 12, 'm': 13, 'n': 14, 'o': 15,
        'p': 16, 'q': 17, 'r': 18, 's': 19, 't': 20, 'u': 21, 'v': 22,
        'w': 23, 'x': 24, 'x': 25, 'z': 26
    }


    return max([alphabet.get(i) for i in s])



if __name__ == '__main__':
    s = input()
    print(solve(s))
