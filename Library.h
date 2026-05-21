#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Member.h"

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<Member> members;

public:
    void addBook();
    void addMember();
    void displayBooks();
    void issueBook();
    void returnBook();
    void searchByTitle();
    void searchByAuthor();
};

#endif
