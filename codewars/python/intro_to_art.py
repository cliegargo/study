def get_w(height):
    W = ""

    a = '*'

    k = 0
    for i in range(height):
        for j in range(i):
            print(' ' * k, a)
            k += 1




if __name__ == "__main__":
    height = int(input())
    print(get_w(height))
