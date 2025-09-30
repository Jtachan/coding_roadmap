# Exercise 15: Building a Library Management System
In this exercise, you will create a simple library management system using classes, inheritance, and polymorphism. The system will manage a collection of books and allow users to perform basic operations like adding, listing, and searching for books.

## Objective

- Use classes and inheritance to model a library system.
- Apply polymorphism to handle different types of books.
- Implement functions to add, list, and search for books.
- Use file I/O to save and load book data.

## Task

- Base Class: Book
  - Attributes:
    - title (string)
    - author (string)
    - isbn (string)
  - Methods:
    - Constructor to initialize the book's details.
    - `display()` to show the book's details (virtual function).
- Derived Class: EBook 
  - Inherits from Book.
  - Additional Attribute:
    - fileSizeMB (double) — the size of the ebook file in megabytes.
  - Override `display()` to show ebook-specific details.
- Library Class:
  - Attributes:
    - A vector of pointers to Book objects.
  - Methods:
    - `addBook(Book* book)` — Adds a book to the library.
    - `listBooks()` — Lists all books in the library.
    - `searchByTitle(const std::string& title)` — Searches for a book by title and displays its details.
    - `saveToFile(const std::string& filename)` — Saves the library data to a file.
    - `loadFromFile(const std::string& filename)` — Loads library data from a file.

Provide a menu-driven interface to:
- Add new books (both regular and ebooks).
- List all books.
- Search for books by title.
- Save the library data to a file.
- Load the library data from a file.

### Expected Behavior

- Users can interact with the library system through the console.
- Books are correctly managed and displayed according to their type (regular or ebook).
- The system should gracefully handle file I/O errors and invalid user input.

## Tips

- Use polymorphism to handle different book types in the Library class.
- Ensure proper memory management (delete allocated objects when done).
- Use file I/O to persist the library's state between program runs.

# C++ theory