#ifndef EBOOK_H
#define EBOOK_H

#include "Book.h"

class EBook : public Book {
   private:
    double fileSizeMB;

   public:
    /**
     * @brief Constructor for EBook class.
     *
     * @param title - Title of the ebook.
     * @param author - Author of the ebook.
     * @param isbn - ISBN code of the ebook.
     * @param size - MB that occupies the ebook.
     */
    EBook(const std::string& title, const std::string& author,
          const std::string& isbn, double size);

    double getSize() const;

    /**
     * @brief Displays the information of the ebook.
     *
     * This function first calls the parent's function 'display()',
     * then appends the file size as a new line.
     */
    void display() const;
};

#endif