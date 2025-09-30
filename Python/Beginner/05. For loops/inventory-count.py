"""Count for the items within the inventory"""

if __name__ == "__main__":
    inventory = ["apple", "apple", "orange", "banana", "orange", "apple", "banana", "banana"]
    apples = 0
    oranges = 0
    bananas = 0

    # First part: counting the items in the inventory.
    for item in inventory:
        if item == "apple":
            apples += 1
        elif item == "orange":
            oranges += 1
        else:
            bananas += 1

    print(f"There is {apples} apples, {oranges} oranges and {bananas} bananas in the inventory.")

    # Second part: finding the first index of a selected item.
    selected_item = input("Which item would you like to inspect? ")
    for index, item in enumerate(inventory):
        if item == selected_item:
            print(f"The first index of the selected item is {index}.")
            break
    else:
        print(f"Item '{selected_item}' is not in the inventory.")
