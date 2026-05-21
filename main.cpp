#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Add Member\n";
        cout << "3. Display Books\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Search Book by Title\n";
        cout << "7. Search Book by Author\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                lib.addBook();
                break;

            case 2:
                lib.addMember();
                break;

            case 3:
                lib.displayBooks();
                break;

            case 4:
                lib.issueBook();
                break;

            case 5:
                lib.returnBook();
                break;

            case 6:
                lib.searchByTitle();
                break;

            case 7:
                lib.searchByAuthor();
                break;

            case 8:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while (choice != 8);

    return 0;
}
