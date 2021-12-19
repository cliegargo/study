# https://www.codewars.com/kata/563a5f4366fbf8cc6e00008b/train/python


def combat(health, damage):
    return health - damage

if __name__ == "__main__":
    health = int(input())
    damage = int(input())
    print(combat(health, damage))