# Keep Guessing

import random

randomNum = random.randrange(1, 11)
print('I have chosen a number between 1 and 10.  Try to guess it.\nYour guess: ', end ='')
guessNum = int(input())

while guessNum != randomNum:
    print('That is incorrect. Guess again.\nYour guess: ', end = '')
    guessNum = int(input())

print('That\'s right! You\'re a good guesser.')
