"""Conversion of Fahrenheit to Celsius."""

if __name__ == "__main__":
    # Required to type-cast into float, as "input" always returns a string.
    fahrenheit = float(input("Enter a temperature in Fahrenheit: "))

    celsius = (fahrenheit - 32) * 5 / 9
    print(f"Your temperature in Celsius is {celsius}")
