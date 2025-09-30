# Exercise 14: Generators

## Objective
Understand what python "generators" are and how to use them.

## Task
Create a sinusoidal signal generator with the following characteristics:

- It must be a dataclass with the attributes:
    - `frequency`: Defines the period of the signal.
    - `amplitude_pp`: Peak-to-peak amplitude. E.g.: a value 5 means the signal goes from -2,5 to 2,5 volts.
    - `initial_phase`: Initial phase of the signal.
- Has a `generate_signal` method (generator) that returns values until the `KeyboardInterrupt` exception is raised (The user presses Ctrl+C). These values are constantly printed on the terminal.

# Python theory

## Generators

The idea of a generator is a function that provides values without having to store them in memory.
The main difference with a function is that a function will stop when anything is returned, while a generator will continue to return values until its logic specifies to stop.

For this purpose, generators use the `yield` keyword to provide data.
Its return type is also defined as `typing.Iterator` of the value they return.

```python
from typing import Iterator

def countdown(initial_value: int) -> Iterator[int]:
    """Countdown from the initial value until 0."""
    current_value = initial_value
    while current_value > 0:
        # Every iteration, the current value is yielded and updated.
        yield current_value
        current_value -= 1
    # This is the last value of the generator.
    # As there is no more logic afterward, the code will stop.
    yield 0
```

A good analogy to see generators is that they are "arrays of values" which don't know the next value nor remember the previous one.
In other words, the program stores their logic in memory, and not the whole array of values.

Generators come in handy in the need to iterate over a large amount of data without storing it or iterating over data that requires processing.
They will use less memory than an array of many objects.
