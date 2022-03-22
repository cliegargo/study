def string_breakers(n, st):
    j = n

    st = st.replace(' ', '')
    for i in range(len(st)):
        print(st[i+j:n])
        j += n



if __name__ == "__main__":
    n = int(input())
    st = input()
    print(string_breakers(n, st))
