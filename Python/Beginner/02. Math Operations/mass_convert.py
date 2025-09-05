"""Converting pounds to kg.

1 lb = 2.205 kg
"""


if __name__ == "__main__":
    pound = float(input("Enter the amount of mass (in pounds) to convert: "))
    kg = pound * 2.205
    print(f"That is the equivalent to {kg:.2f} kg ({kg * 1000:.2f} g).")
