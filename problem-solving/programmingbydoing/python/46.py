# One Shot Hi-Lo

def OneShotHiLo():
    import random

    randomNum = random.randrange(1, 101)

    print('I\'m thinking of a number between 1-100. Try to guess it.')
    guess = int(input())

    if guess == randomNum:
        print('You guessed it! What are the odds?!?')
    elif guess < randomNum:
        print('Sorry, you are too low. I was thinking of', randomNum, '.')
    elif guess > randomNum:
        print('Sorry, you are too high. I was thinking of', randomNum, '.')

if __name__ == "__main__":
    OneShotHiLo()
