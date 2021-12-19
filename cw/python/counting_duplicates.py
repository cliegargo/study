# https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/train/python


def duplicate_count(text):
    counter = {}

    text = text.lower()
    for i in text:
        if i not in " ":
            counter[i] = text.count(i)
        else:
            pass

    occur = 0
    for k in counter.values():
        if k > 1:
            occur += 1

    return occur


if __name__ == "__main__":
    text = input()
    print(duplicate_count(text))