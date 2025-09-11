"""Module for child class 'Rectangle'."""

from __future__ import annotations

from dataclasses import dataclass

from shape import Shape


@dataclass
class Rectangle(Shape):
    """Class to work with squares and rectangles.

    If only one side is specified, it is considered that both have the same length.
    """

    width: float = None
    height: float = None

    def __post_init__(self):
        """Initializing correctly the parameters from the parent class."""
        if self.width is None and self.height is None:
            raise ValueError("Both width and height cannot be None.")
        elif self.width is None:
            self.width = self.height
            self.name = "square"
        elif self.height is None:
            self.height = self.width
            self.name = "square"
        else:
            self.name = "rectangle"
        self.nof_sides = 4

    def calculate_area(self) -> float:
        """Calculate the area of the rectangle."""
        return self.width * self.height
