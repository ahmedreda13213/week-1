
#include "book.h"
#include <iostream>
using namespace std;

void Book::setid(int i) {
    id = i;
}

void Book::setauthor(const string& a) {
    author = a;
}

void Book::settitle(const string& t) {
    title = t;
}

void Book::setyear(int y) {
    year = y;
}

void Book::setavailable(bool a) {
    available = a;
}

void Book::setprice(double p) {
    price = p;
}

int Book::getid() const {
    return id;
}

string Book::getauthor() const {
    return author;
}

string Book::gettitle() const {
    return title;
}

int Book::getyear() const {
    return year;
}

bool Book::getavailable() const {
    return available;
}

double Book::getprice() const {
    return price;
}

void Book::display() const {
    cout << "ID: " << id << endl;
    cout << "Author: " << author << endl;
    cout << "Title: " << title << endl;
    cout << "Year: " << year << endl;
    cout << "Available: " << (available ? "Yes" : "No") << endl;
    cout << "Price: " << price << endl;
    cout << "------------------------" << endl;
}
