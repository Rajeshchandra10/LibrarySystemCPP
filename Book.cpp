#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() {
    id = 0;
    title = "";
    author = "";
    isIssued = false;
}

Book::Book(int id, string title, string author) {
    this->id = id;
    this->title = title;
    this->author = author;
    this->isIssued = false;
}

void Book::display() const {
    cout << "ID: " << id << ", Title: " << title
         << ", Author: " << author
         << ", Status: " << (isIssued ? "Issued" : "Available") << endl;
}
