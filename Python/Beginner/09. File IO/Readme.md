# Exercise 9: File IO Operations

## Objective
Understand how to work with files in Python and the different basic formats.

## Exercise
Create a phone book application with the following features:

- Save and load contacts from a file.
- Add new contacts.
- Remove contacts (by name).
- Show contact details.

Each contact is an item containing the name, email and phone number.

> Note: To show the contacts, you can code your own print function (to show as a table) or you can use the modules [`pprint`](https://docs.python.org/3/library/pprint.html) (python built-in) or [`tabulate`](https://pypi.org/project/tabulate/) (needs pip installation).

# Python Theory

## Files

Files are useful to store and share information.
To work with files, it is required to use the [`open()`](https://docs.python.org/3/library/functions.html#open) function, which requires:

- The path to the file. If instead is just a name, the function assumes the file is in the current working directory.
- The mode in which the file will be opened.

### Writing into a file

To create a new file, the mode `"w"` is to be used.

```python
file = open("file.txt", "w")
for num in range(10):
    file.write(str(num))  # Requires a string to be written
file.close()
```

This will not only create a new file but will also overwrite any content of any existing file with the same name.
If instead the code should add more content to the file, the mode `"a"` (append) should be used.

```python
file = open("file.txt", "a")
for num in range(10, 20):
    file.write(str(num))
file.close()
```

### Reading from a file

Reading from a file is analogous to writing, but using the `"r"` mode.
In this case, the file must exist or an error is raised.

```python
file = open("file.txt", "r")
numbers = file.read()
file.close()
```

The method `read()` returns a string with the content of the file.
When reading a file and expecting multiple values, it is recommended to use the method `readlines()`.

```python
file = open("file.txt", "r")
numbers = []
for line in file.readlines():
    numbers.append(int(line))
file.close()
```

## 'With' statement

As you have seen in all previous codes, the last call to the file is always `file.close()`.
This is necessary to close the access to the file and avoid any memory leak.
However, it can become tedious to always remember to call this method.

Python provides a way to avoid this by using the `with` statement.
This statement will allocate the file into a variable name and will automatically close it when the code it contains finishes.

```python
with open("file.txt", "r") as file:
    numbers = [int(line) for line in file.readlines()]
# Out of the 'with' statement, the file is automatically closed.
```

## Other file formats

In the previous examples only TXT files were used.
These files are quite simple and do not require any special treatment.
Other formats also exit, providing a more complete solution to structure the data (based on the application goal).

Some of the most common formats are:

- Binary files.
- CSV
- XML
- JSON
- YAML

While many binary files can also be opened with the `open()` function with the `"b"` mode, all these file formats have their own specific package to work with them.

In this chapter, we will focus only on JSON files.

## JSON files

JSON files contain structured and serializable data (mostly lists and dictionaries).
They are useful to store small databases.
To work with JSON files, you should get familiar with the `json` package.

For example, considering the following JSON file:

```json
[
    {
        "name": "John",
        "email": "john@email.com",
        "phone": "123456789"
    },
    {
        "name": "Alice",
        "email": "alice@email.com",
        "phone": "987654321"
    }
]
```

All the data can be loaded into a variable as follows:

```python
import json

with open("phone_book.json", "r") as file:
    contacts = json.load(file)
```

Let's assume that we have already modified the book by adding/removing contacts.
To save the changes, we can use the `json.dump()` function:

```python
import json

with open("phone_book.json", "r") as file:
    json.dump(contacts, file)
```
