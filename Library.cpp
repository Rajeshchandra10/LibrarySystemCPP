#include "Library.h"
#include <fstream>
#include <iostream>

Library::Library() {
    loadBooks();
}

void Library::addBook() {
    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Author: ";
    getline(cin, author);

    books.push_back(Book(id, title, author));
    saveBooks();

    cout << "Book added successfully!\n";
}

void Library::viewBooks() {
    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }

    for (const auto& book : books) {
        book.display();
    }
}

void Library::searchBook() {
    string keyword;
    cin.ignore();
    cout << "Enter title/author keyword to search: ";
    getline(cin, keyword);

    bool found = false;
    for (const auto& book : books) {
        if (book.title.find(keyword) != string::npos ||
            book.author.find(keyword) != string::npos) {
            book.display();
            found = true;
        }
    }

    if (!found) {
        cout << "No matching book found.\n";
    }
}

void Library::loadBooks() {
    ifstream fin("books.txt");
    if (!fin) return;

    books.clear();
    int id;
    string title, author;
    bool isIssued;

    while (fin >> id) {
        fin.ignore();
        getline(fin, title);
        getline(fin, author);
        fin >> isIssued;
        fin.ignore();

        Book b(id, title, author);
        b.isIssued = isIssued;
        books.push_back(b);
    }

    fin.close();
}

void Library::saveBooks() {
    ofstream fout("books.txt");
    for (const auto& b : books) {
        fout << b.id << endl
             << b.title << endl
             << b.author << endl
             << b.isIssued << endl;
    }
    fout.close();
}
void Library::clearBookData() {
    ofstream fout("books.txt", ios::trunc); 
    fout.close();  
    books.clear(); 
    cout << "All book records have been cleared.\n";
}

