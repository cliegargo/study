# A Number Guessing Game

import random

number = random.randrange(1, 11)

guess = int(input())

if guess == number:
    print('That\'s right!  My secret number was ', number, '!')
else:
    print('Sorry, but I was really thinking of ', number)
