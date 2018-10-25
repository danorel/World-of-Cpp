//
// Created by Dan Orel on 2/22/18.
//
#include <iostream>
using namespace std;
#ifndef CLASS_CLASS_H
#define CLASS_CLASS_H
class Library{
private:
    char *ID;
    char *Name;
    double Price;
    int Pages;
public:
    Library(char *id, char *name, double price = 0, int pages = 0);
    Library(void);
    void setID(char *);
    char* getID();
    void setName(char *);
    char* getName();
    void setPrice(double);
    double getPrice();
    void setPages(int);
    int getPages();
    void showBook();
};
#endif //CLASS_CLASS_H
