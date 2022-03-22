def find_uniq(arr):
    numbers = {}

    for i in arr:
        if i not in numbers:
            numbers[i] = 0
        else:
            numbers[i] += 1

    for k in numbers.keys():
        for i, j in numbers.items():
            print(k, i, j)

    return None


if __name__ == "__main__":
    arr = [
        [ 1, 1, 1, 2, 1, 1 ],
        [ 0, 0, 0.55, 0, 0 ],
        [ 3, 10, 3, 3, 3 ]
    ]

    for i in range(len(arr)):
        print(find_uniq(arr[i]))
