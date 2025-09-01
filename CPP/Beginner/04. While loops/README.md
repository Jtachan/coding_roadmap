# Exercise 4: Number Guessing Game

## Objective
Learn how to use loops (while or do-while) and conditional statements together to create a simple game.

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

# C++ theory

## While loop

The while-loop is defined to execute a code while a condition is true:

```cpp
int index = 0;

std::cout << "Initial index: " << index << '\n';

while (index < 5) {
  index++;
  std::cout << "Index value: " << index << '\n';
}

std::cout << "End of program" << std::endl;
```

We can expect the following output from this code:
```commandline
Initial index: 0
Index value: 1
Index value: 2
Index value: 3
Index value: 4
Index value: 5
End of program
```

However, the code within the block will not be executed if the condition is not met:

```cpp
int index = 20;

std::cout << "Initial index: " << index << '\n';

while (index < 5) {
  index++;
  std::cout << "Index value: " << index << '\n';
}

std::cout << "End of program" << std::endl;
```

With this code, we can expect the following output:

```
Initial index: 20
End of program
```

## do-while loop

The do-while loop is similar to the while loop, with two major differences:

- The code is structured as `do { ... } while (condition)`
- The block will run at least once.

Considering the following code as an example:

```cpp
int index = 20;

std::cout << "Initial index: " << index << '\n';

do {
  index++;
  std::cout << "Index value: " << index << '\n';
} while (index < 5);

std::cout << "End of program" << std::endl;
```

We can expect the following output:

```cpp
Initial index: 20
Index value: 21
End of program
```

Thus, the 'do-while' is to be used whenever we want to execute its code at least once.