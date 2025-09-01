# Exercise 0: Hello World

## Objetive

Getting familiarized with `rust`, its coding style and how to execute it.

## Task

### 1. Use rustc

Create a file named 'hello_world.rs'. The file must:

- Have a single function `fn main() { }`.
- Print through the terminal 'Hello world!'.

Once created, build the program using `rustc .\hello_world.rs`.
This will create the executable `hello_world.exe` at the working folder.

### 2. Use cargo

Make uso of `cargo` to create a rust installable library.

- Call `cargo new hello_world` for it to create a "hello world" program (source files).
- Build and run the generated program.
- Create a new release of the code.

# Rust 

## Installation

The following guide is created assuming Windows OS.

1. Download the rust executable from the original source: https://www.rust-lang.org/tools/install
2. Launch and install the executable. Rust will require of C++ tools for development.
3. Check a correct installed version by writing `rustc --version` within the terminal.

With this, rust is correctly installed through `rustup`.

At last, two additional commands are required to make `rust` runnable on windows:

```
rustup toolchain install stable-x86_64-pc-windows-gnu
rustup default stable-x86_64-pc-windows-gnu
```

At last, it also provides commands to update it or uninstall it:

- `rustup update`
- `rustup self uninstall`

### Using cargo

As mentioned before, `cargo` is the package manager for `rust`.
It requires of a `Cargo.toml` file (where all the package's metadata is defined) to run successfully.
This file should automatically be defined when a new project is created.

These are some of the `cargo` commands:

- `new ...`: Creating a new project with the specified name.
- `build`: Builds the project creating an executable under `PROJECT\target\debug` (requires to be within the project folder).
- `run`: Same as 'build', but will also run the project.
- `check`: Sanity checks over the code to determine whether the code is compilable, but no executable is created.
- `build --release`: Builds the project creating an executable under `PROJECT\target\release` (requires to be within the project folder).
