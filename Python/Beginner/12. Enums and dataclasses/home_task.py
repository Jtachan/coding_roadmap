"""Module containing code about the HomeTask"""

import enum
from dataclasses import dataclass


class TaskPriority(enum.IntEnum):
    """Enum class for TaskPriority.

    The higher the priority, the higher the value is.
    """

    LOW = 1
    MEDIUM = 2
    HIGH = 3


@dataclass
class HomeTask:
    """Dataclass to organize home tasks."""

    title: str
    priority: TaskPriority
    done: bool = False
