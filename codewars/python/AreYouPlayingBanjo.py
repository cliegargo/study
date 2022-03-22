# https://www.codewars.com/kata/53af2b8861023f1d88000832/train/python

def are_you_playing_banjo(name):
    if name[0] == "R" or name[0] == "r":
        return name + " plays banjo"
    else:
        return name + " does not play banjo"


def main():
    name = input()

    print(are_you_playing_banjo(name))


if __name__ == "__main__":
    main()