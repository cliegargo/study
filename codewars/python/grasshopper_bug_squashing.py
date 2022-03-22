# https://www.codewars.com/kata/56214b6864fe8813f1000019/train/python


from preloaded import *

health = 100
position = 0
coins = 0

def main():
    roll_dice()
    move()
    combat()
    get_coins()
    buy_health()
    print_status()