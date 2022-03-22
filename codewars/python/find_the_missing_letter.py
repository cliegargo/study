# https://www.codewars.com/kata/5839edaa6754d6fec10000a2/train/python


def find_missing_letter(chars):
    letters = ""

    for i in chars:
        letters += i

    curr = ord(letters[0])

    for char in letters:
        if ord(char) == curr:
            curr += 1
        else:
            return chr(curr)

    return chr(curr + 1)

if __name__ == "__main__":
    #chars = ['a','b','c','d','f']
    chars = ['O','Q','R','S']

    print(find_missing_letter(chars))
