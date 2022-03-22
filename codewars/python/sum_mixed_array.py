# https://www.codewars.com/kata/57eaeb9578748ff92a000009/train/python


def sum_mix(arr):
    sum = 0

    for i in range(len(arr)):
        sum += int(arr[i])

    return sum


if __name__ == "__main__":
     arr = [9, 3, '7', '3']
     #arr = ['5', '0', 9, 3, 2, 1, '9', 6, 7]
     #arr = ['3', 6, 6, 0, '5', 8, 5, '6', 2,'0']
     #arr = ['1', '5', '8', 8, 9, 9, 2, '3']
     #arr = [8, 0, 0, 8, 5, 7, 2, 3, 7, 8, 6, 7]
     print(sum_mix(arr))
