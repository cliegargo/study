# Dice

import random

def rollDice():
    print('HERE COMES THE DICE!\n')

    dice1 = random.randrange(1, 7)
    dice2 = random.randrange(1, 7)

    print('Roll #1: ', dice1)
    print('Roll #2: ', dice2)

    diceTotal = (dice1 + dice2)

    print('The total is ', diceTotal, '!')

if __name__ == '__main__':
    rollDice()
