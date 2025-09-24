# Exercise 0: Hello World

## Objective

Getting familiarized with C++ files, their coding style and building the executable. 

## Task

Create a file named 'hello_world.cpp'. The file must:

- Have a single function `int main() { }` which returns 0 at the end.
- Print through the terminal 'Hello world!'.

Once created, build the program and execute it.

## Hints

- Include the standard library `<iostream>`.
- Use `sdt::cout << "My message"` to print a message through the terminal.
- End the terminal use with `std::endl`.
- You can use `using namespace std` to use `cout` instead of `std::cout`.

# C++ theory
## Coding in C++

C++ files have an extension `.cpp` or `.cc`.
Inside, the code is defined by the following (basic) rules:

- The executable file usually has a `main()` function, which returns `0` when has run without problems.
- The body of any block is defined by the keys `{ }`.
- Every line command ends with `;`.
- Libraries are included/imported into the code as `#include <std_lib_name>` (for standard libraries) or as `#include "lib_name.h"` for header files.
- Standard calls are defined as `std::CALL`, for example `std::string` or `std::cout`.

## Compiling & building

Assuming a file `main.cpp`, the code is compiled as the following:

```
g++ main.cpp
```

This creates a file `a.exe`, which can be called through the command line to execute it.
It is also possible to create an executable with a custom name:

```
g++ -o my_program main.cpp
```

With the `-o` parameter, the output `my_program.exe` is created.

# Environment setup

This is a guide to setup your end to be able to code in C++.
For it, you will need:

- **Code editor**: We will use Visual Studio Code.
- **Make**: If you are using Linux, you already have it. This has to be installed for Windows.

## Code editor (VS Code)

The first step is to have a code editor.
At this repo, I will continue with the VisualStudio code.
You can download it from the [official website](https://code.visualstudio.com/download).
Once downloaded, install is but don't open it yet.

### C++ Compiler

Once you have installed VS Code you need to do two extra steps:

- **Install the C/C++ extensions for VS Code**. You can do this from the 'extensions' tab that VS Code provides. Make sure to install the one named "_C/C++ Extension Pack_" (developed by Microsoft).
- **Install MinGW toolchain**. This will act as our C++ compiler (required to call `g++` or to create any object/executable).

On further explanation to install **MinGW** (on Windows) it is recommended to install [MSYS2](https://www.msys2.org/).
Follow the installation steps displayed at the page.
Now, to install the toolchain, open the MSYS2 terminal and write the following command:

```shell
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

Once all the packages have been installed, add the path of your MinGW-w64 `bin` folder to the Windows `PATH` environment variable.

To **check**

## Make for Windows

The `make` is a common used command for large C/C++ projects, which is different to `CMake`.
This is required for exercise 14 and 15.

Install [Make for Windows](https://www.gnu.org/software/make/) following the steps from the original page.

