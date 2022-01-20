# https://www.codewars.com/kata/585d7d5adb20cf33cb000235/train/python


def find_uniq(arr):
    count = {}

    for i in arr:
        if i in count.keys():
            count[i] += 1
        else:
            count[i] = 1

    return min(count, key=count.get)




if __name__ == "__main__":
    arr = [ 1, 1, 1, 2, 1, 1 ]
    print(find_uniq(arr))
