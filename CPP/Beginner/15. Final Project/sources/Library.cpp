#include "Library.h"

void Library::addBook(Book* book) { books.push_back(book); }

void Library::listBooks() const {
    if (books.empty()) {
        std::cout << "No books stored in the library." << std::endl;
    } else {
        for (const auto& book : books) {
            book->display();
            std::cout << '\n';
        }
        std::cout << std::endl;
    }
}

bool Library::searchByTitle(const std::string& title, bool displayMatch) const {
    for (const auto& book : books) {
        if (book->getTitle() == title) {
            if (displayMatch) {
                book->display();
            }
            return true;
        }
    }
    return false;
}

bool Library::saveToFile(const std::string& filename) {
    if (books.empty()) {
        std::cerr << "The library does not contain any book." << std::endl;
        return false;
    }

    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening the file." << std::endl;
        return false;
    }

    for (auto& book : books) {
        // Using 'dynamic_cast' to identify if the book is an ebook.
        // This returns a pointer to the EBook or a nullptr if the object is not
        // an ebook.
        EBook* ebook = dynamic_cast<EBook*>(book);
        if (ebook) {
            outFile << "EBook:" << ebook->getTitle() << ','
                    << ebook->getAuthor() << ',' << ebook->getIsbn() << ','
                    << ebook->getSize() << '\n';
        } else {
            outFile << "Book:" << book->getTitle() << ',' << book->getAuthor()
                    << ',' << book->getIsbn() << '\n';
        }
    }
    books.clear();
    outFile.close();
    return true;
}

bool Library::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error opening the reading file: " << filename
                  << std::endl;
        return false;
    }

    std::string bookType, title, author, isbn, fileSizeStr;
    while (std::getline(inFile, bookType, ':')) {
        // Obtaining the common parameters:
        std::getline(inFile, title, ',');
        std::getline(inFile, author, ',');

        // Checking the book is not already in the library:
        bool inLibrary = searchByTitle(title, false);
        if (inLibrary) {
            // Skip to the next iteration if the book is already stored:
            continue;
        }

        if (bookType == "EBook") {
            std::getline(inFile, isbn, ',');
            std::getline(inFile, fileSizeStr);
            double fileSize = std::stod(fileSizeStr);

            addBook(new EBook(title, author, isbn, fileSize));
        } else {
            std::getline(inFile, isbn);
            addBook(new Book(title, author, isbn));
        }
    }

    return true;
}

Library::~Library() {
    for (auto& book : books) {
        delete book;
    }
}