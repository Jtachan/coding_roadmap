"""Functions to work with the tasks."""

from home_task import HomeTask
from tabulate import tabulate


def organize_tasks(tasks: list[HomeTask], reverse: bool = False) -> list[HomeTask]:
    """Function to organize tasks by priority.

    Parameters
    ----------
    tasks : list of HomeTask
        All the tasks to be organized.
    reverse : bool, optional
        Key to sort the tasks. If True, the lower priority tasks are the first ones.
        By default, the higher priority tasks are the first ones.
    """
    return sorted(tasks, key=lambda task: task.priority, reverse=reverse)


def show_table_of_tasks(tasks: list[HomeTask], hide_done: bool = False):
    """Print a table of tasks. No sorting is performed here."""
    if hide_done:
        task_table = tabulate([[t.title, t.priority.name] for t in tasks if not t.done], headers=["Title", "Priority"])
    else:
        task_table = tabulate(
            [[t.title, t.priority.name, t.done] for t in tasks], headers=["Title", "Priority", "Done"]
        )
    print(task_table)
