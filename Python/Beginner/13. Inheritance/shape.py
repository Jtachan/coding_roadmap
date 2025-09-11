"""Module for the parent class Shape."""

from abc import ABC, abstractmethod
from dataclasses import dataclass


@dataclass
class Shape(ABC):
    """Abstract class for shapes."""

    name: str = ""
    nof_sides: int = 0

    @abstractmethod
    def calculate_area(self) -> float:
        """Calculate the area of the shape."""

    def print_info(self):
        """Print the name and number of sides of the shape."""
        print(f"Shape: {self.name}, number of sides: {self.nof_sides}")
