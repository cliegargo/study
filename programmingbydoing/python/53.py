# Number-Guessing with a Counter

import random

randomNum = random.randrange(1, 11)
print('I have chosen a number between 1 and 10.  Try to guess it.\nYour guess: ', end ='')
guessNum = int(input())

counter = 1
while guessNum != randomNum:
    print('That is incorrect. Guess again.\nYour guess: ', end = '')
    guessNum = int(input())
    counter += 1


print('That\'s right! You\'re a good guesser.')
if (counter > 1):
    print('It only took you', counter, 'tries.')
else:
    print('It only took you', counter, 'try.')
