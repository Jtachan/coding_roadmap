#include "EBook.h"

#include <iostream>

EBook::EBook(const std::string& title, const std::string& author,
             const std::string& isbn, double size)
    : Book(title, author, isbn), fileSizeMB(size) {}

double EBook::getSize() const { return fileSizeMB; }

void EBook::display() const {
    Book::display();
    std::cout << "File size: " << fileSizeMB << std::endl;
}