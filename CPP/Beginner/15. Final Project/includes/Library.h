#ifndef LIBRARY_H
#define LIBRARY_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Book.h"
#include "EBook.h"

/**
 * @brief Represents a library that manages a collection of books.
 *
 * This class allows adding, removing and displaying books stored
 * in a library. It can handle both physical books and ebooks.
 */
class Library {
   private:
    std::vector<Book*> books;

   public:
    // No constructor is needed, as it is desired for the attribute
    // to be initialized empty.

    // Destructor:
    ~Library();

    /**
     * @brief Adds a books to the library.
     *
     * This function adds a book (or ebook) to the collection.
     * Whenever the book is added, the original object is removed.
     *
     * @param book - A unique pointer to a book object.
     */
    void addBook(Book* book);

    /**
     * @brief Displays all the books in the library.
     *
     * This function iterates over the library's collection and
     * displays the details of each book.
     */
    void listBooks() const;

    /**
     * @brief Search a book by its title.
     *
     * @param title - Exact title of the book to look for.
     * @param displayMatch - If true, the book information is displayed on the
     * terminal (only if the book is found).
     * @return bool - True if the book is found, otherwise false.
     */
    bool searchByTitle(const std::string& title, bool displayMatch) const;

    /**
     * @brief Saves the information of the library in a file.
     *
     * This functions stores the information of all the books in
     * the collection in a file. Afterwards, it removes all the books
     * in the collection.
     *
     * @param filename - Name of the output file.
     * @return bool - True if the save was successful, false otherwise.
     */
    bool saveToFile(const std::string& filename);

    /**
     * @brief Loads the library from a file.
     *
     * This function updates the library with the books from a file.
     * It avoids storing copies of the same book.
     *
     * @param filename - Name of the input file.
     * @return bool - True if the load was successful, false otherwise.
     */
    bool loadFromFile(const std::string& filename);
};

#endif