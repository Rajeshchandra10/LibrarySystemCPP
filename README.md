# LibrarySystemCPP

A C++ Library Management System using OOPS,STL and File handling 

# Library Management System (C++)

This is a console-based Library Management System built using C++.

The system allows users to add, search, display, and clear book records, with persistent storage using a text file.

It demonstrates core programming concepts such as Object-Oriented Programming (OOP), file handling, and use of STL containers like vectors.

## Features

- Add a new book (ID, title, author)
- Search books by title or author (supports partial match)
- Display all stored books
- Clear all book records (empties books.txt)
- File-based persistent storage
- Menu-driven console interface
- Structured using classes and headers

## Technologies Used

- C++
- Object-Oriented Programming
- STL: `vector`, `string`
- File handling with `fstream`,`ifstream`,`ofstream`
- Tools: VS Code

## File Structure

LibrarySystemCPP/
│
├── Book.h // Book class declaration
├── Book.cpp // Book class implementation
├── Library.h // Library class declaration
├── Library.cpp // Library class implementation
├── main.cpp // Program entry point with menu
├── books.txt // Auto-generated file storing book data


## How to Use

when the Program runs,you'll see a menu
-![image](https://github.com/user-attachments/assets/a6fce033-a191-4e9d-a349-b875978d4743)
From thoose you can enter any choice

if you want to add a book then enter 1 as a choice and give the book details as below finally it gives book added successfully
-![image](https://github.com/user-attachments/assets/3faf46fd-5dfa-40c0-ad79-c93131317010)

Now all this information will be stored in books.txt file where you can view manually is it stored or not and also can view by giving a choice of 2 as shown below
-![image](https://github.com/user-attachments/assets/ffdd2e33-9382-4245-abd2-7ec8ed05d2c1)

you can search a book with title/author is it available or not using choice of 3
-![image](https://github.com/user-attachments/assets/a23c9d50-9c26-47e5-b102-6bb80da8bd06)

At last if you want to exit choose a choice of 4 showing a Goodbye! message.
-![image](https://github.com/user-attachments/assets/77cbfe1d-f546-43f2-8581-e2eb33bcd31c)

Here In books.txt file, Each book is stored in 4 lines 
-Book ID
-Book Title
-Book Author
-Isissued(0-Available/1-issued)

## Additional information

To compile,use this command
-g++ main.cpp Book.cpp Library.cpp -o library.exe
To Run
-./library.exe

















