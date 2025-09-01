# Exercise 1: Dynamic Memory Management

## Objective
Understand how to manually manage memory using `new` and `delete`, and how to avoid memory leaks and dangling pointers.

## Task
Create a C++ program that:

- Dynamically allocates memory for an array of integers using `new`.
- Fills the array with integers from 1 to 10.
- Prints the content of the array.
- Deletes the allocated memory using `delete[]`.
- After deleting the array, attempt to access the array and demonstrate what happens when you try to use a dangling pointer.

## Expected Result

- The program should print the numbers 1 to 10.
- After the memory is deleted, accessing the array should either produce an error or garbage values.
- You should avoid any memory leaks by ensuring proper memory deallocation.

## Hints
- Use a pointer to allocate memory for the array.
- Always check if memory has been allocated before accessing it.
- Once memory is deleted, make the pointer nullptr to avoid accessing a dangling pointer.

# C++ theory

Dynamic memory allocation allows allocating memory during runtime.
This is useful when the memory size of a program is unknown.

## Operators `new` and `delete`

The `new` operator allocates memory on the heap (dynamic memory) at runtime.
It returns a pointer to the block of memory allocated.

```cpp
// Pointer to an integer
int* ptr = new int;

// Pointer to the first element of an array
int* array_ptr = new int[10];
```

The `delete` operator is used to free the dynamically allocated memory, ensuring the memory is no longer in use.
Failing to free the memory can lead to **memory leaks**.

```cpp
// Freeing memory of a normal pointer
delete ptr;

// Freeing memory of the entire array
delete[] array_ptr;
```

## Memory leaks

Allocated memory occupies space in the systems's memory.
If the allocated memory is not free, it can lead to **memory leaks**, where the system runs out of memory.

## Dangling pointers

After using `delete`, the pointer still holds the old memory address (although it is not valid anymore).
It is of good practice to assign the pointer to a `nullptr` to prevend undefined behavior and potential crashes.

```cpp
#include <iostream>

int main() {
    // Dynamically allocate memory for an integer
    int* num = new int;
    *num = 42;

    std::cout << "Value of num: " << *num << std::endl;

    // Deallocate memory
    delete num;
    num = nullptr;  // Avoid dangling pointer

    return 0;
}
```