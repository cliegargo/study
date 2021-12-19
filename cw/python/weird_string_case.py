# https://www.codewars.com/kata/52b757663a95b11b3d00062d/train/python


def to_weird_case(string):
    letters = []
    for i in string.split():
        letters.append(i)

    weird = ""
    for i in letters:
        for j, k in enumerate(i):
            if j % 2 == 0:
                weird += k.upper()
            else:
                weird += k.lower()
        weird += " "

    return weird[:-1]

if __name__ == "__main__":
    string = input()
    print(to_weird_case(string))