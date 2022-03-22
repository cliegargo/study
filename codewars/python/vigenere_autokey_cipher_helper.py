class VigenereAutokeyCipher:
    def __init__(self, key, abc):
        self.key = key
        self.abc = abc

    def encode(self, text):
        for i in range(len(self.abc)):
            if self.abc[i] != ' ':
                self.key += self.key[i]
            else:
                self.key = self.key[:i] + ' ' + self.key[i:]


        self.key = self.key[0:len(self.abc)]

        encoded = ''
        for i in range(len(self.abc)):
            pass


    def decode(self, text):
        pass




if __name__ == '__main__':

    key = 'password'
    abc = 'my secret code i want to secure'
    VAC = VigenereAutokeyCipher(key, abc)
    print(VAC.encode(abc))
