#include "Book.h"

Book::Book(int id, string t, string a) {
    bookID = id;
    title = t;
    author = a;
    isIssued = false;
}
