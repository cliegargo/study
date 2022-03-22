# https://www.codewars.com/kata/596fba44963025c878000039/train/python


def contamination(text, char):
    return "".join([i.replace(i, char) for i in text])

if __name__ == "__main__":
    text = input()
    char = input()
    print(contamination(text, char))
