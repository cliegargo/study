# https://www.codewars.com/kata/5569b10074fe4a6715000054/train/python


def count(array):
    counted = {}

    for i in array:
        if i in counted.keys():
            counted[i] += 1
        else:
            counted[i] = 1

    return counted





if __name__ == "__main__":
    array = ['a', 'a', 'b', 'b', 'b']
    print(count(array))
