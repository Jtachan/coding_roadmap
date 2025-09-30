"""Number guessing game using while loops."""

import random

if __name__ == "__main__":
    value = random.randint(1, 100)
    guess = int(input("Guess a number between 1 and 100: "))

    while True:
        if guess < value:
            print("Too low!")
        elif guess > value:
            print("Too high!")
        else:
            break
        guess = int(input("Enter a new guess: "))

    print("You guessed correctly!")
