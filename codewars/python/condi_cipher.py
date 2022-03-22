import string

def encode(message, key, initShift):
    init_key = key + string.ascii_lowercase

    keyed = {k:0 for k in init_key}
    keyed = {k:i+1 for i,k in enumerate(keyed)}

    encoded = ''

    print(keyed)

    current = message[0]

    for i in range(len(message)):
        if message[i] in keyed.keys():
            shift = keyed.get(current) + initShift
            if shift > 26:
                #print('shift',shift)
                while shift > 26:
                    shift -= 26
                #print('shift',shift)
                ky = list(keyed.keys())[list(keyed.values()).index(shift)]
                print(ky)
            else:
                ky = list(keyed.keys())[list(keyed.values()).index(shift)]
                print(ky)
            current = list(keyed.keys())[list(keyed.values()).index(shift)]
        else:
            print(message[i])



if __name__ == '__main__':
    message = 'i will never eat any grapes again'#'qvf cmnxmdkjfca.p,ab mf,byokf vjhwpcyb'#input()
    key = 'superkey'#'nqhbfgmi'#input()
    initShift = 4#28#int(input())

    print(encode(message, key, initShift))
