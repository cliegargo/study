# https://www.codewars.com/kata/6097a9f20d32c2000d0bdb98/train/python


def i(word):
    vowel = 0
    cons = 0

    for j in word:
        if j in "aeiouAEIOU":
            vowel += 1
        else:
            cons += 1

    if vowel >= cons:
        return "Invalid word"
    else:
        if word != '' and word[0] != 'I' and word[0].isupper():
            return f"i{word}"
        else:
            return "Invalid word"


if __name__ == "__main__":
    word = input()
    print(i(word))