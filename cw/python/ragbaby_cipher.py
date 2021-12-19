import string


def create_key(key):
    alpha = string.ascii_lowercase
    print(alpha)

    keyed = {}
    ll = []

    for i in range(27):
        if alpha.find(key[i]):
            keyed[key[i]] = i + 1
    """
    for i in range(len(alpha)):
        if key[i] not in alpha:
            keyed[alpha[i]] = i + 1
    """
    return keyed


def create_text(text):
    word = []
    count = 1
    for i in text:
        if i.isalpha():
            word.append((i, count))
        else:
            count = 0
            word.append((i, count))
        count += 1

    return word


def encode(text, key):
    keyed = create_key(key)
    print(keyed)
    word = create_text(text)

    encoded = ""

    for i in word:
        if i[1] != 0:
            if i[0].isupper():
                print("If.")
                sub = keyed.get(i[0].lower()) + i[1]
                char = list(keyed.keys())[list(keyed.values()).index(sub)]
                encoded += char.upper()
            else:
                print("Else.")
                sub = keyed.get(i[0]) + i[1]
                char = list(keyed.keys())[list(keyed.values()).index(sub)]
                encoded += char
        else:
            encoded += i[0]

    return encoded


def decode(text, key):
    keyed = create_key(key)
    word = create_text(text)

    num = [i[1] for i in word]

    decoded = ""

    for i in range(len(text)):
        if text[i].isalpha():
            if text[i].isupper():
                sub = keyed.get(text[i].lower()) - num[i]
                char = list(keyed.keys())[list(keyed.values()).index(sub)]
                decoded += char.upper()
            else:
                sub = keyed.get(text[i]) - num[i]
                char = list(keyed.keys())[list(keyed.values()).index(sub)]
                decoded += char
        else:
            decoded += text[i]

    return decoded


if __name__ == "__main__":
    #text = input()
    #key = input()
    text = "This is an example."
    key = "cipherabdfgjklmnoqstuvwxyz"
    print(encode(text, key))
    print(decode(encode(text, key), key))
