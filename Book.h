#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
public:
    int bookID;
    string title;
    string author;
    bool isIssued;

    Book(int id, string t, string a);
};

#endif
