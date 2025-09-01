# Exercise 0: Hello World

## Objective

- Install & setup python properly.
- Getting familiarized with python files, their coding style and building the executable.

## Task

Create a file named 'hello_world.py'. The file must:

- Have a single block `if __name__ == "__main__"` containing the code.
- Print through the terminal 'Hello world!'.

Run your file by using `python hello_world.py`.

# Theory

## Installing & setting Python

To **install** Python, head over to [python.org](https://www.python.org/), then 'Downloads' and select the python version you want.
I recommend to always go for the latest released version.

When installing it, remember to check the box "Add python.exe to PATH" at the first step.
Once installed, open a terminal and write `python`. This will open the Python console, ensuring Python is installed.

> Note: To exit the Python console, press CRTL + D.

For **setting** Python before working with it, a **virtual environment** SHOULD be created.
A _virtual environment_ is an isolated worspace to manage python packages.
You can consider it like a folder with a copy of your Python, where you can install tools and these ones will not be installed at your original Python.
This prevents possible installation conflicts among python packages.

Run the following code to create an environment with the name `.venv`:
```shell
python -m venv .venv
```

At last, activate the virtual environment to work with it.

**On Windows**
```
.venv\Scripts\activate
```

**On Linux**
```
.venv/bin/activate
```

## Coding in Python

Python mostly works with _modules_ and _packages_:

- A **module** is a file that ends with the extension `.py`. Modules usually have code to be run within the module itself or within other modules.
- A **package** is a folder containing a file `__init__.py` and other Python modules. Packages can contain subpackages within them. We will learn more about packages in further exercises.

Modules, as mentioned before, contain some python code.
A module named `my_module.py` can be invoked by python to run the code by calling it through the CLI (Command Line Interface):
```
python my_module.py
```

A module can contain a `if __name__ == "__main__"` block.
This block states that, all code contained within it will only run when the file is directly invoked as just mentioned.

```python
# my_module.py

def printing_hello():
    print("Hi! Welcome to the learning Python exercises")


if __name__ == "__main__":
    printing_hello()

```

For now, consider this block as a good practise for coding in python.
