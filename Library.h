#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
using namespace std;

class Library {
private:
    vector<Book> books;
    void loadBooks();
    void saveBooks();

public:
    Library();
    void addBook();
    void viewBooks();
    void searchBook();
};

#endif
