def encrypt_this(text):
    encrypted = [i for i in text]
    text = text.split()

    print(text)
    print(encrypted)

    k = 0
    for i in range(len(text)):
        for j in range(len(text[i])):
            #print(j, text[i][j], '\t\t\t\t', text[i][-1])
            if j == 0:
                #print(j, k, text[i][j], ord(text[i][j]), end=' ')
                #print(f"F:\t{f}")
                #print(f"F:\t{ord(text[i][j])}")
                #encrypted[j] = l
                encrypted[k] = ord(text[i][j])
            elif j == 1:
                encrypted[k] = text[i][len(text[i]) - 1]
            elif j == text[i][len(text[i]) - 1]:
                #print(j, text[i][j])
                encrypted[k] = text[i][j]
                #print(f"L:\t{l}")
                #print(f"L:\t{(text[i][len(text[i]) - 1])}")
                #encrypted[j].replace(text[i][len(text[i]) - 1], f)
                #print(text[i][1:2], k)
                #encrypted[k] = text[i][k]
                #encrypted[k] = 'r'
            #print(i, j, k, text[i][j])
            k+=1
        k=0
    print(f"\n\n\n\n\n{encrypted}")




        #print(f"text:\t{text[i]}\t\tfirst:\t{f}\t\tlast:\t{l}")




if __name__ == "__main__":
    text = input()
    print(encrypt_this(text))
