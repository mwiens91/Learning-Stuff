import random

secret_number = random.randrange(1, 10)

print("Welcome to the Guessing Game!\nI have thought of a number from 1 to 10.\nCan you guess it?")

while True:

    try:
        guess = int(input('Try and guess my secret number: '))

    except ValueError:
        print("You did not enter a number.")

    except:
        print("An unknown error has occurred.")

    if guess == secret_number:
        print("You got it correct!!!\nThere is no prize for this game though. ;)")
        break
    else:
        print("Nope, incorrect. Try again.")
