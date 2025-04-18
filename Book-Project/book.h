#ifndef book_h
#define book_h
#include <iostream>
#include <string>
using namespace std;


class Book {
private:
    int id;
    string author;
    string title;
    int year;
    bool available;
    double price;

public:
    void setid(int);
    void setauthor(const string&);
    void settitle(const string&);
    void setyear(int);
    void setavailable(bool);
    void setprice(double);

    int getid() const;
    string getauthor() const;
    string gettitle() const;
    int getyear() const;
    bool getavailable() const;
    double getprice() const;

    void display() const;
};
#endif
