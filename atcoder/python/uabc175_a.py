from collections import Counter

S = input()


if (S[0] == S[1] == S[2]):
    print(Counter(S)['R'])
elif (S[0] != S[1] != S[2]):
    print(1)
