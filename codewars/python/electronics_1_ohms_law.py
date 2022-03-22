def ohms_law(s):
    x = float(s.split()[0][0:-1])
    y = float(s.split()[1][0:-1])

    x_s = s.split()[0][-1]
    y_s = s.split()[1][-1]

    if x == 0 or y == 0:
        return 0


    symbols = {
        #Voltage
        ('A', 'R'): x * y,
        ('R', 'A'): x * y,
        # Current
        ('V', 'R'): x // y,
        ('R', 'V'): x / y,
        # Resistance
        ('V', 'I'): x / y,
        ('I', 'V'): x / y,
    }

    #   V   /   I(A)    *   R
    #
    #   V       =   I(A)    *   R
    #   I(A)    =   V       /   R
    #   R       =   V       /   I

    #print(tuple(symbols.keys())[0])

    print(symbols.get(x_s), symbols.get(y_s))





if __name__ == "__main__":
    s = ['2e-3A 1e3R', '5V 10e-3A', '1e3R 2e-3A', '0.005A 30V', '0R 0A', '30V 5000R']
    for i in s:
        print(f'{ohms_law(i)}\n\n')
