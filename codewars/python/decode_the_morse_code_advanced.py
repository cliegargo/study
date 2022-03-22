import re


MORSE_CODE = {
    '.-': 'A', '-...': 'B', '-.-.': 'C', '-..': 'D', '.': 'E',
    '..-.': 'F', '--.': 'G', '....': 'H', '..': 'I', '.---': 'J',
    '-.-': 'K', '.-..': 'L', '--': 'M', '-.': 'N', '---': 'O',
    '.--.': 'P', '--.-': 'Q', '.-.': 'R', '...': 'S', '-': 'T',
    '..-': 'U', '...-': 'V', '.--': 'W', '-..-': 'X', '-.--': 'Y',
    '--..': 'Z', '-----': '0', '.----': '1', '..---': '2', '...--': '3',
    '....-': '4', '.....': '5', '-....': '6', '--...': '7', '---..': '8',
    '----.': '9', '.-.-.-': '.', '--..--': ',', '..--..': '?',
    '.----.': "'", '-.-.--': '!', '-..-.': '/', '-.--.': '(', '-.--.-':
    ')', '.-...': '&', '---...': ':', '-.-.-.': ';', '-...-': '=',
    '.-.-.': '+', '-....-': '-', '..--.-': '_', '.-..-.': '"',
    '...-..-': '$', '.--.-.': '@', '...---...': 'SOS'
}


for i in MORSE_CODE.items():
    print(i)


def decode_bits(bits):
    #return bits.replace('111', '-').replace('000', ' ').replace('1', '.').replace('0', '')

    bits = re.findall(r'111|000|1|0', bits)

    morse = ''

    for i in bits:
        if i == '000':
            morse += ' '
        elif i == '111':
            morse += '-'
        elif i == '1':
            morse += '.'

    return morse




def decode_morse(morseCode):
    morseCode = morseCode.split(' ')

    print(morseCode)

    decoded = ''

    MORSE = {}

    vals = list(MORSE_CODE.values())

    for i, j in enumerate(MORSE_CODE):
        temp = ''
        for k in j:
            temp += k * 2
        MORSE[temp] = vals[i]
        temp = ''

    for i in morseCode:
        if i in MORSE.keys():
            decoded += MORSE.get(i)
        elif i in MORSE_CODE.keys():
            decoded += MORSE_CODE.get(i)
        elif i == '':
            decoded += ' '


    for i in MORSE.items():
        print(i)


    final_decode = ''

    for i, j in zip(decoded, decoded[1:]):
        if i not in ' ' and j in ' ':
            final_decode += i[0]
        elif i in ' ' and j in ' ':
            final_decode += i[0]

    return re.sub(' +', ' ', ''.join(final_decode + decoded[-1]))

    """
    for i in range(len(morseCode)):
        print('\t', MORSE_CODE.get(i))
        temp = {}
        for j in range(len(morseCode[i])):
            #print(morseCode[i][j])
            if morseCode[i][j] in temp.keys():
                temp[morseCode[i][j]] += 1
            else:
                temp[morseCode[i][j]] = 1
        #print(f'TEMP:\t{temp}')
        #temp = {}
    """




if __name__ == '__main__':
    #morseCode = input()
    bits = '1100110011001100000011000000111111001100111111001111110000000000000011001111110011111100111111000000110011001111110000001111110011001100000011'
    print(decode_bits(bits))
    print(decode_morse(decode_bits(bits)))
