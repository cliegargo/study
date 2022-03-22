# https://www.codewars.com/kata/57aa3927e298a757820000a8/train/python


def cypher(string):
    pattern = {
        'I': '1', 'R': '2', 'E': '3', 'A': '4', 'S': '5', 'G': '6', 'T': '7',
        'B': '8', 'O': '0', 'l': '1', 'z': '2', 'e': '3', 'a': '4', 's': '5',
        'b': '6', 't': '7', 'g': '9', 'o': '0'
    }

    return "".join([str(pattern.get(i)) if i in pattern.keys() else i for i in string])


if __name__ == "__main__":
    string = input()
    print(cypher(string))
