# Exercise 10: Statistical Analysis of Numbers

## Objective
Understanding vectors and getting used to .h files.

## Task
In this exercise, you'll write a program that reads a list of numbers from a file, stores them in a vector, and then calculates and outputs the following statistics:

- Mean (Average)
- Median
- Mode

Use the file `numbers.txt` for testing your code.

## Steps

1. **Reading the numbers**: 
  - Read all the numbers from a file into a `std::vector<int>`.
  - Ensure the file exists and is not empty.
  - Handle any potential errors (e.g., non-numeric data).
2. **Calculating the statistics**:
  - Create a `statistics.cpp` file with functions to calculate the statistics.
  - _Mean_: Average of the numbers, or the sum of all numbers divided over the total count of numbers.
  - _Median_: Middle value when the numbers are sorted. If there’s an even number of values, the median is the average of the two middle numbers.
  - _Mode_: The most frequent number that appears among the numbers. If there is a tie for the most frequent number, return all of them.
3. **Output the results**:
  - Display the mean, median, and mode(s) to the user.

# C++ theory

## Vectors

Vectors are **dynamic arrays** provided by the Standard Template Library.
This means that their size can grow or shrink at runtime, automatically managing memory.

To use them, the following include is required:

```cpp
#include <vector>
```

All the elements contained within the vector must be the same type.
While initializing an empty vector is possible, vectors also have multiple initializations:

```cpp
std::vector<int> v;              // empty vector of ints
std::vector<int> v(5);           // vector with 5 elements, initialized to 0
std::vector<int> v(5, 42);       // vector with 5 elements, each = 42
std::vector<int> v = {1, 2, 3};  // vector initialized with values
```

### Accessing elements

Just like when using arrays, elements can be accessed by indexing.
For example, `v[0]` will access the first element.
However, direct indexing access the element without any bound checks.

To access a value performing bound checks use `v.at(index)`, which will raise an error if the index is out of range 
Vectors also allow extra operations over them:

- `.front()`: Access the first element.
- `.back()`: Access the last element.
- `.size()`: Number of elements currently in the vector.
- `.capacity()`: Allocated storage (may be larger than `.size()` to reduce reallocations).
- `.empty()`: Checks if vector has no elements.

### Modifying vectors

As a vector is a dynamic array, it allows to add or remove elements:

- `v.push_back(item)`: Adds a new item at the last place.
- `v.pop_back()`
