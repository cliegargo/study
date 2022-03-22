def up_array(arr):
    #d = int(''.join([str(i) for i in arr]))
    d = ''
    for i in arr:
        if i is None or i < 0:
            return None
        if i > 0 and i < 10:
            d += str(i)

    print(d)

    x = int(d) + 1
    print(x)

    return [int(i) for i in str(x)]

if __name__ == '__main__':
    d = [1, 2, 33]
    #d = [2, 1, 4, 7, 4, 8, 3, 6, 4, 7]
    #d = [5, 7, 4]
    print(up_array(d))
