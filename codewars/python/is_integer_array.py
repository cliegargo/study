def is_int_array(arr):
    if arr:
        l = len(arr)

        #i = sum([1 for i in arr if isinstance(i, int) or i == int(str(i))])
        i = 0
        for i in arr:
            if i:
                if isinstance(i, int) or int(i):
                    i += 1



        if l == i:
            return True
        else:
            return False
    elif arr is None or arr == '':
        return False


if __name__ == '__main__':
    arr = [
        [],
        [1, 2, 3, 4],
        None,
        '',
        [None],
        [1.0, 2.0, 3.0001],
        ['-1']
    ]

    for i in arr:
        print(is_int_array(i))
