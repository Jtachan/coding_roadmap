#include "Book.h"
#include <iostream>

Book::Book(const std::string& title, const std::string& author,
           const std::string& isbn)
    : title(title), author(author), isbn(isbn) {}
Book::~Book() {};

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getIsbn() const { return isbn; }

void Book::display() const {
    std::cout << "Title: " << title << '\n'
              << "Author: " << author << '\n'
              << "ISBN: " << isbn << std::endl;
}
