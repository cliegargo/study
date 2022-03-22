# https://www.codewars.com/kata/59ca8246d751df55cc00014c/train/python


def hero(bullets, dragons):
    while(dragons != 0):
        bullets -= 2
        dragons -= 1

    return True if (bullets >= dragons) else False


if __name__ == "__main__":
    bullets = int(input())
    dragons = int(input())