#ifndef BOOK_H
#define BOOK_H

#include <string>

/**
 * @brief Base class for generic a book.
 *
 * Class representing a generic book.
 * Private attributes: titile, author, isbn.
 * Public methods: display()
 */
class Book {
   private:
    std::string title;
    std::string author;
    std::string isbn;

   public:
    /**
     * @brief Constructor of the class.
     * @param title - title of the book.
     * @param author - author of the book.
     * @param isbn - isbn code of the book.
     */
    Book(const std::string& title, const std::string& author,
         const std::string& isbn);
    virtual ~Book();

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getIsbn() const;

    /**
     * @brief Displays the information about the book.
     */
    void display() const;
};

#endif