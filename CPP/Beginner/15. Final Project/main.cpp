#include "Book.h"
#include "EBook.h"
#include "Library.h"

int main() {
    // Declarations:
    Library myBooks = Library();
    std::string title, author, isbn;
    double fileSize;

    std::cout << "Checking first the library is empty:" << std::endl;
    myBooks.listBooks();

    // Adding a book and an ebook:
    std::cout << "\nAdding 'Harry Potter' and 'Jungle Book'..." << std::endl;
    title = "Harry Potter and the Philosopher's Stone";
    author = "J.K. Rowling";
    isbn = "978-0747532699";
    myBooks.addBook(new Book(title, author, isbn));

    title = "The Jungle Book";
    author = "Rudyard Kipling";
    isbn = "978-1503215678";
    fileSize = 1.5;
    myBooks.addBook(new EBook(title, author, isbn, fileSize));
    myBooks.listBooks();

    // Populating the library from files:
    std::cout << "Loading the repertory of books and ebooks..." << std::endl;
    myBooks.loadFromFile("my_books.txt");
    myBooks.loadFromFile("my_ebooks.txt");

    std::cout << "All books loaded. Please check for no duplicates:\n"
              << std::endl;
    myBooks.listBooks();

    // Exporting the data into a new file:
    std::cout << "Saving all books into 'my_library.txt'..." << std::endl;
    myBooks.saveToFile("my_library.txt");

    std::cout << "Exporting done, now the library should be empty:"
              << std::endl;
    myBooks.listBooks();

    return 0;
}