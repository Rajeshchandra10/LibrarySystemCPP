#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n===== LIBRARY MENU =====\n";
        cout << "1. Add Book\n";
        cout << "2. View All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "5. Clear All Book Records\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: lib.addBook(); break;
            case 2: lib.viewBooks(); break;
            case 3: lib.searchBook(); break;
            case 4: cout << "Goodbye!\n"; break;
            case 5: lib.clearBookData();break;

            default: cout << "Invalid option!\n";
        }
    } while (choice != 4);

    return 0;
}