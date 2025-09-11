# Exercise 4: Number Guessing Game

## Objective
Learn how to use while loops and conditional statements together to create a simple game.

## Task
Write a program that:
- Randomly generates a number between 1 and 100 (you can use rand() function).
- Asks the user to guess the number.
- Keeps asking the user for a guess until they guess the correct number.
- Provides feedback after each guess:
  - If the guess is too high, print "Too high!"
  - If the guess is too low, print "Too low!"
  - When the user guesses the correct number, print "Congratulations! You've guessed the number!"


## Expected Result:
The program will continue asking for guesses until the correct number is guessed.

```commandline
Guess the number (1-100): 50
Too high!
Guess the number (1-100): 25
Too low!
Guess the number (1-100): 37
Congratulations! You've guessed the number!
```

# Python theory

## While loops

A `while` loop is a loop that will always run as long as the condition is true:

```python
num = 0
while num < 3:
    print(num)
    num += 1
print("The loop ended!")
print(num)
```

The previous code prints the following output:
```
0
1
2
The loop ended!
3
```

## Infinite loops

As the `while` loop runs based on a condition, which is a type boolean, it is possible to define a `while True` loop (infinite loop).

```python
while True:
    print("This will run forever.")
```

Infinite loops have their use (based on the application that is being coded).
For that purpose, the command `brake` allows to stop any loop at any time:

```python
num = 0
while True:
    print(num)
    num += 1
    if num >= 3:
        break
print("The loop ended")
```

## Package imports

One advantage of using python is that it is a very modular language.
In other words, we can import code from other libraries and programmers.
These libraries are called "packages" in python.

One of these packages (needed for the current exercise) is [`random`](https://docs.python.org/3/library/random.html).
It allows generating pseudo-random numbers.
```python
import random

print(random.randrange(10))  # Prints a random number from 0 to 9 (inclusive)
```
