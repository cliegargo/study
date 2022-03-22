# https://www.codewars.com/kata/5884ee2465fc9c8dee0005e8/train/python


def sentence_count(paragraph):
    return sum([{'.': 1, '?': 1, '!': 1}.get(i) for i in paragraph if i in {'.': 1, '?': 1, '!': 1}.keys()])



if __name__ == "__main__":
    paragraph = input()
    print(sentence_count(paragraph))
