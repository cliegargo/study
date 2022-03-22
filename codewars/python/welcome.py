# https://www.codewars.com/kata/577ff15ad648a14b780000e7/train/python


def greet(language):
    welcome = {
        "english": "Welcome",
        "english": "Welcome",
        "czech": "Vitejte",
        "danish": "Velkomst",
        "dutch": "Welkom",
        "estonian": "Tere tulemast",
        "finnish": "Tervetuloa",
        "flemish": "Welgekomen",
        "french": "Bienvenue",
        "german": "Willkommen",
        "irish": "Failte",
        "italian": "Benvenuto",
        "latvian": "Gaidits",
        "lithuanian": "Laukiamas",
        "polish": "Witamy",
        "spanish": "Bienvenido",
        "swedish": "Valkommen",
        "welsh": "Croeso"
    }

    if welcome.get(language) != None:
        return welcome.get(language)
    else:
        return "Welcome"


if __name__ == "__main__":
    language = ["english", "dutch", "IP_ADDRESS_INVALID", "", 2]

    for i in language:
        print(greet(i))
