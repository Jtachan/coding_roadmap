# Exercise 9: Understanding Pointers
## Objective
This exercise will help you get familiar with pointers by manipulating them in different ways.

## Tasks

1. **Pointer Basics**:
    - Declare an integer variable and a pointer that points to it. 
    - Output the value of the integer, the pointer, and the value at the pointer (dereferencing).
2. **Pointer Arithmetic**:
    - Use pointer arithmetic to manipulate the pointer and observe how it changes the value it points to.
3. **Using Pointers with Arrays**:
    - Create an array and use a pointer to iterate over the array elements.
4. **Swapping Values**:
    - Write a function that swaps the values of two integers using pointers.

## Expected result

Each task will perform a print out stating their section.
For the following, it is assumed that:

- The single variable is named `x` and is type integer.
- The pointer for `x` is named `p`.
- The array is named `arr` and has a size of 5.
- The pointer for `arr` is named `arrPtr`

```
1. Basics
**********
Value of 'x': 10
Pointer 'p' pointing to 'x': 0x7ffee6f9a88c
Value at pointer 'p' (dereferencing): 10

2. Arithmetics
**********
Value at 'x' after incrementing the value via pointer 'p': 11

3. Arrays operations
**********
Array elements accessed via pointer arithmetics:
1 2 3 4 5

4. Pointers with functions
**********
Before swap: a=5, b=10
After swap: a=10, b=5
```

# C++ theory

## Pointers

Pointers are variables that store the **memory address** of other variables.

Pointers are declared as `type* p`, where:
- `type` corresponds to the same type as the variable it points to.
- `*` indicates it is a pointer.
- `p` is the name of the pointer.

As a good practise, if a pointer is not pointing to any variable value it can be initialized to `nullptr`:

```cpp
int* p = nullptr;  
```

Pointers are initialized to **references**. The reference of a variable is defined with the symbol `&`.
This initialization is defined as _addressing-of_.

```cpp
int x = 42;
int* p = &x;
```

To read the value of `x` using `p` it is required to **dereference** the pointer:

```cpp
cout << &x;   // prints address of x
cout << p;    // prints address stored in p (same as &x)
cout << *p;   // prints value stored at that address (42)
```

Dereferencing a pointer allows to perform operations directly over the value of the variable.

```cpp
int x = 42;
int* p = &x;

cout << *p;  // prints 42
(*p)++;  // Adds 1 to x
cout << *p;  // prints 43
```

> Note: Pointers do not make much sense when only the basic information of them is known.
> They are extremely helpful when working with large structures, such arrays or objects.

## Pointers and arrays

When a pointer is referenced to an array, by default it is referenced to the first element of the array.

```cpp
int arr[3] = {1, 2, 3};
int* p = arr;      // p = &arr[0]
```

When working with pointers and arrays, the pointer itself can be modified to visit any position of the array.

```cpp
cout << *p;  // Prints '1' (the first element of the array)
cout << *(p+2);  // Prints '3'
```

The code `*(p+2)` means that the pointer first is incremented in two memory positions, then that memory address is dereferenced to read its value.

## Pointers and functions

When using pointers in a function, there are two steps:
1. Declaring and using the pointer at the function.
2. Parsing the pointer as an input parameter.

The pointer declaration of the function is analogous to the pointer definition using `type*`:

```cpp
void increment_by_one(int* p) {
    (*p)++;
}
```

This function requires a pointer as an input parameter, and to do so it is not required to create any other pointer.
As stated before, a pointer is initialized to the reference of a variable.
Following the same logic, what the function requires is the reference of the variable itself:

```cpp
int x = 5;
increment(&x);  // The reference of 'x' is passed as a pointer.
cout << x;  // Prints 6
```
