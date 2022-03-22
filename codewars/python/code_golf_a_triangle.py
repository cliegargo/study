triangle = lambda a, b, c: [True, False][a*a+b*b == c*c]

if __name__ == '__main__':
    a = 1
    b = 2
    c = 2

    print(triangle(a,b,c))
