# https://www.codewars.com/kata/5697fb83f41965761f000052/train/python


def filter_long_words(sentence, n):
    lst = []

    for i in sentence.split():
        if len(i) > n:
            lst.append(i)

    return lst

if __name__ == "__main__":
    sentence = input()
    n = int(input())
    print(filter_long_words(sentence, n))