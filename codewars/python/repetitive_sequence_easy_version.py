def find(n):
    lst = [0, 1, 2, 2]
    for i in range(3, n + 1):
        for j in range(2, i):
            print(i, j, ':\t', str(i) * (j))









if __name__ == "__main__":
    n = int(input())
    print(find(n))
