# https://www.codewars.com/kata/5a2328c4f8cc61e2a3000245/train/python


def dollar_word(input_word):
    letters = {
        'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'i': 9,
        'j': 10, 'k': 11, 'l': 12, 'm': 13, 'n': 14, 'o': 15, 'p': 16, 'q': 17,
        'r': 18, 's': 19, 't': 20, 'u': 21, 'v': 22, 'w': 23, 'x': 24, 'y': 25,
        'z': 26
    }

    return True if sum([letters.get(i) for i in input_word]) == 100 else False


if __name__ == "__main__":
    input_word = input()
    print(dollar_word(input_word))

    """
    input_word = ["lightning", "activates", "wizards", "but", "not", "toads", "nor", "water"]
    for i in input_word:
        print(dollar_word(i))
    """
