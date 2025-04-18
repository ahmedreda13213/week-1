#include <iostream>
#include "book.h"
using namespace std;
int main() {
    const int max_book = 3;
    Book books[max_book];

    for (int i = 0; i < max_book; i++) {
        int id;
        string author, title;
        int year;
        bool available;
        double price;

        cout << "Enter details for Book " << (i + 1) << endl;
        cout << "ID: ";
        cin >> id;
        books[i].setid(id);


        cout << "Author: ";
        cin >> author;
        books[i].setauthor(author);

        cout << "Title: ";
        cin >> title;
        books[i].settitle(title);

        cout << "Year: ";
        cin >> year;
        books[i].setyear(year);

        cout << "Available (1 for Yes, 0 for No): ";
        cin >> available;
        books[i].setavailable(available);

        cout << "Price: ";
        cin >> price;
        books[i].setprice(price);

        cout << endl;
    }

    cout << "Displaying all books details:\n";
    for (int i = 0; i < max_book; i++) {
        books[i].display();
    }

    return 0;
}
