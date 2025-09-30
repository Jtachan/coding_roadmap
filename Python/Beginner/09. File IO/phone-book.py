"""Phone book script to handle contacts."""

import json


def load_contacts() -> list[dict[str, str]]:
    """Loading all contacts from the file 'phone_book.json'.

    Returns
    -------
    phone_book_contacts : list of dictionaries
        List of contacts. Each contact is a dictionary with keys 'name', 'email', and
        'phone'.
    """
    with open("phone_book.json", "r", encoding="utf-8") as file:
        phone_book_contacts = json.load(file)
    return phone_book_contacts


def save_contacts(phone_book_contacts: list[dict[str, str]]):
    """Saving all contacts to the file 'phone_book.json'.

    Parameters
    ----------
    phone_book_contacts : list of dictionaries
        Data of all the contacts, defined as an array of items (each item is a contact).
    """
    with open("phone_book.json", "w", encoding="utf-8") as file:
        json.dump(phone_book_contacts, file, indent=4)
    print("Contacts saved successfully as 'phone_book.json'.")


def remove_contact(contact_name: str):
    """Remove a single contact from the phone book.

    This function uses the data from the 'contacts' variable defined within the 'main'
    block. It modifies "in-line" the list.

    Parameters
    ----------
    contact_name : str
        Name of the person to remove from the contacts. The name is caps-sensitive.

    Raises
    ------
    ValueError
        If the provided name is not
    """
    for contact in contacts:
        if contact["name"] == contact_name:
            contacts.remove(contact)
            print("Contact removed successfully!")
            break
    else:
        raise ValueError(f"Contact {contact_name} not found!")


def print_phone_book(data: list[dict[str, str]]):
    """Print the phone book data in a tabular format.

    This function does not use 'tabular' nor 'pprint'. Instead, it uses the formatter
    parameter of the f-string as ":<N", where N is the width of the column.
    """
    if len(data) == 0:
        print("The phone book is empty!")

    else:
        print(f"{'Name':<20} {'Email':<25} {'Phone':<15}")
        print("-" * 60)
        for c in data:
            print(f"{c['name']:<20} {c['email']:<25} {c['phone']:<15}")


if __name__ == "__main__":
    print("Welcome to the phone book!")
    contacts = []

    while True:
        choice = input(
            "-----------------------------------\n"
            "Select your operation to perform:\n"
            "\t1. Load phone book\n"
            "\t2. Save phone book\n"
            "\t3. Add a new contact\n"
            "\t4. Remove an existing contact\n"
            "\t5. Show all contacts\n"
            "\t6. Exit\n"
        )
        if choice == "1":
            confirmation = input(
                "This will override your current contacts. Are you sure you want to continue? (y/[N]): "
            )
            if confirmation.lower() in ("y", "yes"):
                contacts = load_contacts()
                print("Phone book loaded successfully!")

        elif choice == "2":
            save_contacts(contacts)

        elif choice == "3":
            name = input("Enter the name of the contact: ")
            email = input("Enter the email of the contact: ")
            phone = input("Enter the phone number of the contact: ")
            contacts.append({"name": name, "email": email, "phone": phone})
            print("Contact added successfully!")

        elif choice == "4":
            name = input("Enter the name of the contact to remove: ")
            try:
                remove_contact(name)
            except ValueError:
                print(
                    f"The contact '{name}' was not found. Print the phone book to check you wrote the name correctly."
                )

        elif choice == "5":
            print_phone_book(contacts)

        elif choice == "6":
            break  # Stoping the while-loop
        else:
            print("Invalid choice!")

    print("Goodbye!")
