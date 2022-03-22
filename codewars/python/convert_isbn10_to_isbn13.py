def isbn_converter(isbn):
    m2 = isbn[0:-1]
    m3 = "978-" + m2
    n = list(reversed(m3.replace("-", "")))
    print(n)



if __name__ == "__main__":
    isbn = input()
    print(isbn_converter(isbn))
