# Exercise 02: Mass converter

## Objetive
Understand how to perform basic mathematical operations and how to format their result into a string.

## Task
Create a simple program to convert mass:
Given a mass in pounds, the program must convert it into kilograms.
The final print must be expressed in both grams and kilograms.

```
Enter the amount of mass (in pounds) to convert: 30.5
That is the equivalent to 13.83 kg (1383.45 g).
```

Each result must show exactly two digits after the decimal point.

## Theory

### Operators

Python support multiple operators for math when working with integers and floats.
There are the basic operators:

- `+` for addition.
- `-` for subtraction.
- `/` for division.
- `*` for multiplication.

```pycon
>>> 2 + 3
5
>>> 2 - 3
-1
>>> 2 / 3
0.6666666666666666
>>> 2 * 3
6
```

There are also some additional operators:

- `**` to define a value to a power.
- `//` for the floor division operator (the integer part of the division).
- `%` for the modulus operator (the remainder of a division).

```pycon
>>> 5 ** 2
25
>>> 5 // 2
2
>>> 5 % 2
1
```

## Number string formatting

At the exercise 01, the [f-string](https://docs.python.org/3/reference/lexical_analysis.html#f-strings) was introduced as a clean solution to include variables in strings.

````python
from math import pi

print(f"A very cool number is Pi, which is {pi}...")
# A very cool number is Pi, which is 3.141592653589793...
````

There are cases, like the previous one, where the complete value of the variable might not be in the format we want.
For these cases, the f-string allows some [format specifiers](https://docs.python.org/3/library/string.html#formatspec).
There are many specifiers, but these are some helpful ones:

- `{var:.Nf}`: The print will stop after the N-th digit after the decimal point.
- `{var:0N}`: # The final value is formatted with as many '0's to its left as the value N specified.
