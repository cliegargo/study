import string

class VigenereCipher:
    def __init__(self, key, abc):
        self.key = key
        self.alphabet = abc


    def encode(self, text):
        if len(self.key) != len(text):
            for i in range(len(text)):
                self.key += self.key[i]

        self.key = self.key[0:len(text)]
        #print(string.ascii_lowercase.index('b'))

        lt = {
            'a': 0, 'b': 1, 'c': 2, 'd': 3, 'e': 4, 'f': 5, 'g': 6, 'h': 7,
            'i': 8, 'j': 9, 'k': 10, 'l': 11, 'm': 12, 'n': 13, 'o': 14,
            'p': 15, 'q': 16, 'r': 17, 's': 18, 't': 19, 'u': 20, 'v': 21,
            'w': 22, 'x': 23, 'y': 24, 'z': 25
        }

        xpos = [lt.get(c) if c in lt.keys() else 26 for c in text]
        ypos = [lt.get(c) if c in lt.keys() else 26 for c in self.key]

        encoded = ''

        for i, j in enumerate(text):
            if xpos[i] != 26:
                check = xpos[i] + ypos[i]
                if check > 25:
                    char = list(lt.keys())[list(lt.values()).index(check - 26)]
                    encoded += char
                else:
                    char = list(lt.keys())[list(lt.values()).index(check)]
                    encoded += char
            else:
                encoded += j
        print(encoded)
        return encoded

    def decode(self, text):
        pass




if __name__ == '__main__':

    key = input()#'password'
    abc = input()#'abcdefghijklmnopqrstuvwxyz'
    text = input()#'CODEWARS'#"it's a shift cipher!"

    VAC = VigenereCipher(key, abc)

    encoded = VAC.encode(text)
    print(f'Encode:\t{encoded}')

    #decoded = VAC.decode(encoded)
    #print(decoded)
