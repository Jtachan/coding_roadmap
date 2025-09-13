# Exercise 8: File I/O Operations
## Objective
Practice reading from and writing to files in C++. This exercise will help you understand how to handle file streams, manage file input/output, and incorporate error handling.

## Tasks

- Create a Text File: Manually create a text file named "data.txt" in the same directory as your C++ program. Add the following numbers in the file:

```commandline
42
67
89
23
```

- Read from the File:  Write a C++ program that reads the integers from data.txt, one by one.
- Calculate the Sum: As you read each integer from the file, calculate their sum and display the result after all numbers have been read.
- Write the Result to Another File: Write the sum of the integers into a new file named "result.txt".
- Error Handling: Implement error handling to check if the files can be opened successfully. If a file can't be opened, display an appropriate error message.

## Hints

- File Reading: Use `std::ifstream` for reading from a file.
- File Writing: Use `std::ofstream` for writing to a file.
- Loops: You'll likely use a loop to read the numbers from the file.
- Error Handling: Check if the file stream is in a good state before proceeding with reading or writing operations.


## Expected Result
The program should print each number from data.txt to the console, display the sum, and write the sum to result.txt.

# C++ theory

## I/O stream classes for files

To perform Input/Output operations with files, C++ requires the library `fstream` to be included.
Within this library, there can be found three classes:

1. `std::ifstream` (Input File Stream) used to read data.

```cpp
#include <fstream>
std::ifstream inputFile("example.txt");
```

2. `std::ofstream` (Output File Stream) used to write data.

```cpp
#include <fstream>
std::ofstream outputFile("example.txt");
```

3. `std::ftream` (File Stream) to handle both I/O data.

```cpp
#include <fstream>
std::fstream file("example.txt", std::ios::in | std::ios::out);
```

Remember always to **close the file** to release system resources:

```cpp
#include <fstream>
inputFile.close();
outputFile.close();
```

### Reading from files

Considering **text files**, the data can be read by:

- Using the operator `>>`, where each data (words or numbers) is separated by whitespaces.

```cpp
std::ifstream inputFile("data.txt");
std::string word;
while (inputFile >> word) {
    // Process word
}
```

- Using `std::getline` to read the entire line, until a newline character ('\n').

```cpp
std::ifstream inputFile("data.txt");
std::string line;
while (std::getline(inputFile, line)) {
    // Process line
}
```

Considering **binary files**, the method `read()` has to be used.
This requires to specify the buffer where the data is initialized and the size of the buffer to read.

```cpp
std::ifstream inputFile("data.bin", std::ios::binary);
char buffer[100];
inputFile.read(buffer, sizeof(buffer));
```

### Writing to files

Considering **text files**, the data can be written by using the operator `<<`.

```cpp
std::ofstream outputFile("output.txt");
outputFile << "Hello, World!" << std::endl;
```

> Note: Consider using `std::endl` only when flushing is required. Otherwise use `'\n'`.

Considering **binary files**, the method `write()` has to be used.

```cpp
std::ofstream outputFile("data.bin", std::ios::binary);
char buffer[100] = { /* ... data ... */ };
outputFile.write(buffer, sizeof(buffer));
```