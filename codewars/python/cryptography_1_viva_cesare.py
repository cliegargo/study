def caesar_crypto_encode(text, shift):
    if text is None or text == '' or '  ' in text:
        return ''
    else:
        encoded = ''
        for i in text:
            if shift > 0:
                if i.isalpha():
                    encoded += chr(ord(i) + shift)
                else:
                    encoded += i
            elif shift < 0:
                shift *= - 1
                if i.isalpha():
                    encoded += chr(ord(i) + shift)
                else:
                    encoded += i
            else:
                pass

        return encoded


















if __name__ == '__main__':
    text = input()
    shift = int(input())

    print(caesar_crypto_encode(text, shift))
