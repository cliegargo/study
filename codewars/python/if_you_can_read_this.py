# https://www.codewars.com/kata/586538146b56991861000293/train/python


def to_nato(words):
    NATO = {
        "A": "Alpha", "B": "Bravo", "C": "Charlie", "D": "Delta", "E": "Echo",
        "F": "Foxtrot", "G": "Golf", "H": "Hotel", "I": "India", "J": "Juliett",
        "K": "Kilo", "L": "Lima", "M": "Mike", "N": "November", "O": "Oscar",
        "P": "Papa", "Q": "Quebec", "R": "Romeo", "S": "Sierra", "T": "Tango",
        "U": "Uniform", "V": "Victor", "W": "Whiskey", "X": "X-ray",
        "Y": "Yankee", "Z": "Zulu"
    }

    words = words.upper()

    translated = ""

    for i in words:
        if i in NATO.keys():
            translated += NATO[i] + " "
        elif i in ",.!?":
            translated += i + " "
    
    if translated[:-1] == ",.!?":
        return translated
    else:
        return translated[:-1]


if __name__ == "__main__":
    words = input()
    print(to_nato(words))

    """
    'India Foxtrot  Yankee Oscar Uniform  Charlie Alfa November  Romeo Echo Alfa Delta '
    'India Foxtrot Yankee Oscar Uniform Charlie Alfa November Romeo Echo Alfa Delta'
    """