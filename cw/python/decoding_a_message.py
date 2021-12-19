# https://www.codewars.com/kata/565b9d6f8139573819000056/train/python


def decode(message):
    pattern = {
        'a': 'z', 'b': 'y', 'c': 'x', 'd': 'w', 'e': 'v', 'f': 'u', 'g': 't',
        'h': 's', 'i': 'r', 'j': 'q', 'k': 'p', 'l': 'o', 'm': 'n', 'n': 'm',
        'o': 'l', 'p': 'k', 'q': 'j', 'r': 'i', 's': 'h', 't': 'g', 'u': 'f',
        'v': 'e', 'w': 'd', 'x': 'c', 'y': 'b', 'z': 'a'
    }

    return "".join([str(pattern.get(i)) if i != ' ' else str(i) for i in message])


if __name__ == "__main__":
    message = input()

    print(decode(message))
