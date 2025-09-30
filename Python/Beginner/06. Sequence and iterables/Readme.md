# Exercise 6: Random inventory

## Objetive

Understand the concept of lists, tuples, sets and dictionaries (python arrays).

## Task
Modify the code in exercise 5 to use python lists, tuples, sets and dictionaries.
Follow the next steps:

1. Generate a random inventory using `random` and list comprehension.
2. Use a `dict` to keep the count of the items.
3. Use the methods of `list` to find the first selected item.

# Python theory

## Lists and tuples

The simplest array types in python are [`lists`](https://docs.python.org/3/library/stdtypes.html#list) and [`tuples`](https://docs.python.org/3/library/stdtypes.html#tuple).
They both can be considered as a sequence of elements (of any type).

```python
my_list = [1, 2, 3.0, "a", "b", True]
my_tuple = (1, 2, 3.0, "a", "b", True)
```

The main difference between them is that tuples are immutable (they can't be modified).
Lists allow modifying their size with new items or removing some of them.
The following shows some of the most common operations with `lists`.

````pycon
>>> my_list = [1, 2, 3]
>>> my_list.append(4)  # Add a new element to the end of the list.
>>> my_list
[1, 2, 3, 4]
>>> my_list.remove(2)  # Remove the first element that is equal to 2.
>>> my_list
[1, 3, 4]
>>> my_list += ["a", "b"]  # List concatenation.
>>> my_list
[1, 3, 4, 'a', 'b']
````

> Feel free to read more about [lists](https://docs.python.org/3/tutorial/datastructures.html#more-on-lists) and [tuples](https://docs.python.org/3/tutorial/datastructures.html#tuples-and-sequences) in the official python documentation.

### Indexing and slicing

When working with lists and tuples, there are cases where we want to access a specific element or range of elements.
These operations are called _indexing_ and _slicing_ respectively.

**Indexing** is accessing a single element by providing the index of the element.
All python arrays are zero-indexed, so the first element has index 0, the second has index 1, and so on.

**Slicing** is accessing a range of elements by providing the start and end indexes.
While the function `slice()` allow defining slices, most of them are defined with the notation `[start:end]`.
When using slices, it is also possible to define a step size as `[start:end:step]`.

Both indexing and slicing are possible with lists, tuples and strings.

```pycon
>>> my_list = [1, 2, 3, 4, 5]
>>> my_list[0]  # Access the first element.
1
>>> my_list[3]  # Access the fourth element.
4
>>> my_list[::-1]  # Accessing all elements in reverse order.
[5, 4, 3, 2, 1]
>>> my_str = "Hello world!"
>>> my_str[:5]  # Accessing from the first element (included) to the fifth element (excluded).
'Hello'
>>> my_str[6:]
'world!'
```

As you can see in the slicing examples, when some values are not provided python uses some default values:
- `start`: 0
- `end`: The length of the array
- `step`: 1

## Sets

A `set` in python is defined as a collection of unique elements.
The only restriction is that the elements must be [hashable](https://docs.python.org/3/glossary.html#term-hashable).

Sets can be defined as `set(...)` or as `{...}`

````pycon
>>> my_list = [1, 1, 2, 3, 4, 4, 4, 4, 5]
>>> my_set = set(my_list)
>>> my_set
{1, 2, 3, 4, 5}
````

> Feel free to read more about [sets](https://docs.python.org/3/tutorial/datastructures.html#sets) in the official python documentation.

## Dictionaries

Dictionaries are a collection of key-value pairs.
Just like sets the keys must be hashable, and they use the brackets `{}` for their definition.

Due to the possible conflict when defining a variable like `var = {}`, this one is always initialized as a dictionary in python.

```pycon
>>> my_dict = {"apples": 2, "oranges": 3, "bananas": 5}
>>> my_dict["apples"]
2
>>> my_dict["bananas"] -= 1
>>> my_dict["grapes"] = 10
>>> my_dict
{'apples': 2, 'oranges': 3, 'bananas': 4, 'grapes': 10}
```

> Feel free to read more about [dictionaries](https://docs.python.org/3/tutorial/datastructures.html#dictionaries) in the official python documentation.
 
## Iterable comprehensions

An _iterable comprehension_ is a constructor for any of the previous iterable objects.
It is defined by using the correct bracket notation and a for-loop within it.

To understand it better, let's consider an **example with lists**.
We want to create a list of the first 10 numbers.

```python
my_list = []
for num in range(10):
    my_list.append(num)
```

The previous code is correct, but it could be simplified with a **list comprehension**:

```python
my_list = [num for num in range(10)]
```

List comprehensions are more efficient to populate iterables and, in general, more readable.

The most powerful feature of list comprehension is that they can be used to filter data using the ternary operator.
Let's consider a function `is_even` that returns `True` if the input is even, and that we want to populate a list with all the even numbers from 0 to 10.

```python
my_list = [num for num in range(10) if is_even(num)]
print(my_list)  # [0, 2, 4, 6, 8]
```

> Note: Functions are explained in the next section.

## Operations with lists, tuples, sets and dictionaries

Python allows some special operations with all the four previous types.
For example:

- `len(my_iterable)`: Returns the number of items in the iterable.
- `var in my_iterable`: Whether if the variable 'var' is within the iterable. When the iterable is type `dict`, then 'var' is checked to be among the keys.

These operations are valid thanks to the [magic methods](https://docs.python.org/3/reference/datamodel.html#special-method-names) that python provides.
We will learn more about them in further sections regarding OPP (Object-Oriented Programming).
