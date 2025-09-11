# Exercise 5: Inventory count

## Objective
Understanding for-loops and the unique features that Python introduces.

## Task

Create a program that, given a list of items, counts the total number of each item that appears in the list.
The list is the following:
```python
# Fixed list:
inventory = ["apple", "apple", "orange", "banana", "orange", "apple", "banana", "banana"]
```

For the simplicity of the exercise, only apples, oranges and bananas are part of the inventory.
Then, allow the user to select one item. The code has to then tell the user the first index of the item in the list.

> Note: Use for-loops for this exercise. Avoid using dictionaries or the `list.index()` method.
 
# Python theory

## For loops

A for-loop is analogous to a while-loop.
The main difference is that it iterates over a sequence of data and will automatically stop when the sequence is exhausted.

```python
for number in range(5):
    print(number)
print("The loop ended!")
```

The previous used function [`range()`](https://docs.python.org/3/library/functions.html#func-range) to generate a sequence of numbers.
In this case, it will return all numbers from 0 to 4.
For it, the following is the output of the example code:

```
0
1
2
3
4
The loop ended!
```

> Note: Lists and other sequences/iterables will be covered in the next exercise.
> For now, consider them as a sequence of arbitrary data.

## For-else loops

And just like in the while-loops, the `break` statement will stop the iteration.
The `for-else` loop is similar to the `for` loop, but it will execute the `else` block if the loop is finished without breaking.

```python
# 'numbers' is a list of random integer numbers
for number in numbers:
    if number % 2 == 0:
        print("The list has at least an even number!")
        break
else:
    print("No even number found in the list!")
```

In this example, the for loop will check every number within the list of numbers.
If any even number is found, the `break` statement will stop the loop.
Only when no even number was found, the `else` block will be executed.

Give it a try!
You can use these two lists of numbers:

````python
numbers = [1, 2, 3, 4, 5]
numbers = [1, 3, 5, 7, 9]
````
