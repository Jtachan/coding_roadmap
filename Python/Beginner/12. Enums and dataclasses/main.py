"""Main exercise using enumerations and dataclasses."""

from home_task import HomeTask, TaskPriority
from organizer import organize_tasks, show_table_of_tasks


def add_new_task():
    """Function to add a new task."""
    title = input("Enter the title of the task: ")
    try:
        priority = int(input("Enter the priority of the task (1 for low, 2 for medium, 3 for high): "))
    except ValueError:
        print("Invalid priority. Please enter a number between 1 and 3.")
        return

    if priority in (1, 2, 3):
        task = HomeTask(title, TaskPriority(int(priority)))
        tasks.append(task)
        print(f"Task '{title}' added successfully.")
    else:
        print("Invalid priority. Please enter a number between 1 and 3.")


def start_tasks():
    print("Starting with all the tasks...")
    for task in organize_tasks(tasks):
        print(f"Next task: {task.title}")
        input("Press enter when the task is done.")
        task.done = True


if __name__ == "__main__":
    tasks = []

    print("Welcome to the home task organizer!")
    while True:
        choice = input(
            "-----------------------------------\n"
            "Select your operation to perform:\n"
            "\t1. Add a new task\n"
            "\t2. Show all tasks\n"
            "\t3. Organize tasks\n"
            "\t4. Start tasks until they are done\n"
            "\t5. Quit\n"
            "-----------------------------------\n"
        )

        if choice == "1":
            add_new_task()
        elif choice == "2":
            hide_done = input("Hide done tasks? (y/[n]]): ").lower() in ("y", "yes")
            show_table_of_tasks(tasks, hide_done)
        elif choice == "3":
            higher_first = input("Show higher priority tasks first? (y/[n]): ").lower() in ("y", "yes")
            tasks = organize_tasks(tasks, reverse=not higher_first)
        elif choice == "4":
            start_tasks()
        elif choice == "5":
            break
        else:
            print("Invalid choice!")
