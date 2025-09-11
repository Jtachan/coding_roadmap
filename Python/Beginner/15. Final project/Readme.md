# Exercise 15: Final Project

## Objective
Use all skills learned in this course to create a final project.

## Task
As a final project, here are stated multiple ideas.
Feel free to choose one or to make them all for practise.

All final projects are based on the idea of expanding previously visited exercises.
However, all of them have a research part that you must do yourself.
At this module, you will find no example code, you are the only one to realize whether your code works or fails.

Create a new package (a folder with an empty `__init__.py` and all required modules) for the final project.
Create also a 'main.py' file (outside the package) to invoke the project as `python main.py`.

> Note: As now your modules are in a package, your import will change to `from package.module import function`.`

### 1. **Phone Book app**

Expand the logic of the previous phone book app to have the next structure:
- Each contact must be a dataclass with the attributes 'name', 'phone', 'email' and 'contact type'.
- Create an enumeration for 'contact type' which separates the contacts in different types as "friend", "work", "emergency", etc.
- Each contact can have multiple types, but always at least one.
- Create methods to add, remove, update and search contacts.
- Print a table of all contacts where:
    - All contacts are always ordered alphabetically by name.
    - Filter contacts by type is an option.
- Automatically load the phone book (if the file exists) and automatically ask to save the current data when the user wants to quit the app.
- The database must be saved in a JSON file.

**Hints**

- Explore the module `os.path` for searching if a file exists.
- Dataclasses can be directly exported to a python dictionary. Research how to do this.
- Enumerations are not JSON serializable, you will need to prepare the data before exporting it with `json.dump()`.
- If the program crashes, do not panic and read all messages in the console from bottom to top to find the issue.

### 2. **Signal generator**

Expand the logic of your sine generator to become any signal generator:

- Allow generating the next types of signals:
    - Sine
    - Square
    - Triangle
- The class must present the attributes `amplitude`, `frequency` and `initial_phase`.
- The signal generator must allow either generating infinite values (until the `KeyboardInterrupt`) or a limited number of values.
- Values should be exportable to a file.
- The class must have a method to plot a finite number of values.

**Hints**

- Look into `matplotlib.pyplot` for plotting the signal.
- Exporting the data into a file should be simple enough either with `open()`, with the module `csv` or with `numpy.savetxt()`.
- Remember that `amplitude` can be either peak-to-peak amplitude or maximum amplitude. Define clearly in your docstring what this is to be.