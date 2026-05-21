#include <iostream>
#include "Library.h"

using namespace std;

// Add Book
void Library::addBook() {
    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title);

    cout << "Enter Author Name: ";
    getline(cin, author);

    books.push_back(Book(id, title, author));

    cout << "Book Added Successfully!\n";
}

// Add Member
void Library::addMember() {
    int id;
    string name;

    cout << "Enter Member ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Member Name: ";
    getline(cin, name);

    members.push_back(Member(id, name));

    cout << "Member Added Successfully!\n";
}

// Display Books
void Library::displayBooks() {
    cout << "\n--- Book List ---\n";

    for (auto &book : books) {
        cout << "ID: " << book.bookID
             << " | Title: " << book.title
             << " | Author: " << book.author
             << " | Status: "
             << (book.isIssued ? "Issued" : "Available")
             << endl;
    }
}

// Issue Book
void Library::issueBook() {
    int id;

    cout << "Enter Book ID to Issue: ";
    cin >> id;

    for (auto &book : books) {
        if (book.bookID == id) {
            if (!book.isIssued) {
                book.isIssued = true;
                cout << "Book Issued Successfully!\n";
            } else {
                cout << "Book is already issued.\n";
            }
            return;
        }
    }

    cout << "Book not found.\n";
}

// Return Book
void Library::returnBook() {
    int id;

    cout << "Enter Book ID to Return: ";
    cin >> id;

    for (auto &book : books) {
        if (book.bookID == id) {
            if (book.isIssued) {
                book.isIssued = false;
                cout << "Book Returned Successfully!\n";
            } else {
                cout << "Book was not issued.\n";
            }
            return;
        }
    }

    cout << "Book not found.\n";
}

// Search by Title
void Library::searchByTitle() {
    string title;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title);

    for (auto &book : books) {
        if (book.title == title) {
            cout << "\nBook Found:\n";
            cout << "ID: " << book.bookID
                 << " | Author: " << book.author
                 << " | Status: "
                 << (book.isIssued ? "Issued" : "Available")
                 << endl;
            return;
        }
    }

    cout << "Book not found.\n";
}

// Search by Author
void Library::searchByAuthor() {
    string author;
    cin.ignore();

    cout << "Enter Author Name: ";
    getline(cin, author);

    bool found = false;

    for (auto &book : books) {
        if (book.author == author) {
            cout << "\nBook Found:\n";
            cout << "ID: " << book.bookID
                 << " | Title: " << book.title
                 << " | Status: "
                 << (book.isIssued ? "Issued" : "Available")
                 << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No books found by this author.\n";
    }
}
