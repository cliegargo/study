def collatz(n):
    sum = 1
    while(n != 1):
        if (n % 2 == 0):
            n //= 2
        else:
            n = n * 3 + 1
        sum += 1
    return sum


def main():
    n = int(input())
    #n = 73567465519280238573
    print(collatz(n))


if __name__ == '__main__':
    main()