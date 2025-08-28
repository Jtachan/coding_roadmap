# Exercise 6: Robust User Input with Error Handling
## Objective
Learn how to handle errors gracefully, particularly when dealing with user input.

## Task

- Prompt the user to enter an integer between 1 and 100.
- Validate the input:
  - If the user enters something that isn’t an integer, display an error message and prompt them to try again.
  - If the user enters an integer outside the valid range (1-100), display an error message and prompt them to try again.
- Once a valid input is received, display a confirmation message.

## Expected Result
The program should continue to prompt the user until they provide a valid integer within the specified range.
Display a confirmation message once the correct input is provided.

Example interaction:
```commandline
Enter an integer between 1 and 100: 
abc
Invalid input. Please enter an integer between 1 and 100: 
150
Input out of range. Please enter an integer between 1 and 100: 
50
Thank you! You entered 50.
```

# C++ theory

## Stream Flags

You might have realised that, even though a variable can be defined as an integer, nothing stops the user to give an invalid type as an input.
For example, the following promt might be correct from the perspective of a user:

```commandlinme
Enter an integer between 1 and 100: 
fifty two
```

To prevent these cases, the console input provides some tools:

### std::cin.good()

The function `std::cin.good()` is part of the stream state-checking functions.
It returns `true` when no errors have occurred at the stream (for example, the validity of the input type).

Let's consider the user input "fifty two" from before for the example.
The following code will then print the correct message based on the input type:

```cpp
int number;

std::cout << "Please, write a number:" <<std::endl;
std::cin >> number;

if std::cin.good() {
  std::cout << "Your number is " << number << std::endl;
} else {
  std::cout << "You have provided an invalid entry" << std::endl;
  std::cin.clear();
}
```

### Handling invalid inputs

If the user provides an invalid input, there is two actions to consider:

1. Clear the error flag with `std::cin.clear()`. Otherwise, if the second input of a user is correct, the function `std::cin.good()` would still consider there was an error within the stream.
2. Ignore the rest of the stream to avoid unexpected behavior. Use `std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')` to do so.
