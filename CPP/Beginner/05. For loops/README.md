# Exercise 5: Sum of an Array
## Objective
Learn how to work with arrays and loops in C++.

## Task
 - Create an array that holds 10 integers.
 - Populate the array with values entered by the user.
 - Write a loop that sums all the elements in the array.
 - Display the sum to the user.

## Expected Result:
The program should prompt the user to enter 10 integers.
After entering all the numbers, the program should output the sum of those integers.

# C++ theory

## For-loop

A for-loop is analogous to a while-loop where the condition to finalize and the task to perform at the end of each loop is defined together.

```cpp
for (int index = 0; index < 5; index++) {
    std::cout << "Current index: " << index << '\n';
}
std::cout << "End of program" << std::endl;
```

The following output is the result from this code:

```
Current index: 0
Current index: 1
Current index: 2
Current index: 3
Current index: 4
End of program
```

## Arrays

An array is a sequence of values, where every value is of the same type.
Arrays are defined with a fix size:

```cpp
// Array which can contain 5 integer numbers
int array[5];
```

An array can be initialized by using the keys `{}` or by populating it number by number:

```cpp
// Defining and initializing an array:
int array[5] = {0, 1, 2, 3, 4}

// Populating an array with the values {5, 6, 7, 8, 9}
for (int index = 0, num = 5; index < 5; index++, num++) {
    array[index] = num;
}
```

Sequences in C++ are indexed at 0.
That means the first index is 0 and not 1.
Thus, the code `array[2]` access the third element of the array.

For that reason, for loops are very useful to access all elements of an array.
From C++11, the following code also allows to iterate over all elements:

```cpp
int array[3] = {0, 1, 2}

for (int number : array) {
    std::cout << number << " ";
}
std::cout << std::endl;
```

This code prints by the terminal:

```
0 1 2
```
