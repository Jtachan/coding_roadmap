"""Finding prime numbers using functions."""

import math
from typing import Union


def is_prime(number: Union[int, float]) -> bool:
    """Checking if a positive number is prime."""
    threshold = int(math.sqrt(number)) + 1
    for num in range(2, threshold):
        if number % num == 0:
            return False
    return True


if __name__ == "__main__":
    limit = int(input("Up to which number do you want to find prime numbers? "))
    prime_numbers = [num for num in range(1, limit + 1) if is_prime(num)]
    print("These are the numbers:")
    print(prime_numbers)
