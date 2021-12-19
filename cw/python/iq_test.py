# https://www.codewars.com/kata/552c028c030765286c00007d/train/python


def iq_test(numbers):
    nums = []
    for i in numbers.split():
        nums.append(i)

    even = []
    odd = []
    for i in nums:
        j = int(i)
        if j % 2 == 0:
            even.append(j)
        else:
            odd.append(j)

    if len(even) < len(odd):
        for i, j in enumerate(nums):
            k = int(j)
            if k == even[0]:
                return i + 1
    else:
        for i, j in enumerate(nums):
            k = int(j)
            if k == odd[0]:
                return i + 1


if __name__ == "__main__":
    numbers = input()
    print(iq_test(numbers))