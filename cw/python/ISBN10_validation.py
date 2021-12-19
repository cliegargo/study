# https://www.codewars.com/kata/51fc12de24a9d8cb0e000001/train/python


def valid_ISBN10(isbn):
    ISBN = []

    for i in isbn:
        if isbn[0] in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ':
            return False
        elif i == 'X':
            i = '10'
            ISBN.append(int(i))
        else:
            ISBN.append(int(i))
    
    if(len(ISBN) == 10):
        sum = 0
        c = 1
        for i in range(len(ISBN)):
            sum += ISBN[i] * c
            c += 1
        mod = sum % 11 == 0

        if mod == True:
            return True
        else:
            return False
    else:
        return False


if __name__ == "__main__":
    isbn = input()
    print(valid_ISBN10(isbn))