"""Count for the items within the inventory.

Create a random inventory containing apples, oranges and bananas.
Then count all the objects in the inventory and provide the item of the first
object the user requested.
"""

import random

if __name__ == "__main__":
    inventory = (
        ["apple" for _ in range(random.randint(1, 5))]
        + ["banana" for _ in range(random.randint(1, 5))]
        + ["orange" for _ in range(random.randint(1, 5))]
    )
    count = {"apples": 0, "oranges": 0, "bananas": 0}

    # First part: counting the items in the inventory.
    for item in inventory:
        count[item] += 1

    print(
        f"There is {count['apples']} apples, {count['oranges']} oranges and "
        f"{count['bananas']} bananas in the inventory."
    )

    # Second part: finding the first index of a selected item.
    selected_item = input("Which item would you like to inspect? ")
    if selected_item in count:
        print(f"The first index of the selected item is {inventory.index(selected_item)}.")
    else:
        print(f"Item '{selected_item}' is not in the inventory.")
