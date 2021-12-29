# https://www.codewars.com/kata/5f882dcc272e7a00287743f5/train/python


always_odd=lambda n:[n-1, n][n%2]

if __name__ == '__main__':
    n = int(input())
    print(always_odd(n))
