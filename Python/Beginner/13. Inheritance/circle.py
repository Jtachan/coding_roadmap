"""Child class circle (from Shape)"""

from __future__ import annotations

from dataclasses import dataclass
from math import pi

from shape import Shape


@dataclass
class Circle(Shape):
    """Class to work with circles.

    Any new instance without specifying the radius will be created with a default value of 1.0.
    """

    radius: float = 1.0

    def __post_init__(self):
        """Initializing correctly the parameters from the parent class."""
        self.name = "circle"
        self.nof_sides = 1

    @classmethod
    def from_diameter(cls, diameter: float) -> Circle:
        """Class method to create a circle from its diameter."""
        return cls(radius=diameter / 2)

    def calculate_area(self) -> float:
        """Calculate the area of the circle."""
        return self.radius**2 * pi

    @property
    def diameter(self) -> float:
        """Return the diameter of the circle."""
        return self.radius * 2
