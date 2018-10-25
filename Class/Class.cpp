//
// Created by Dan Orel on 2/22/18.
//
#include "Class.h"
Library::Library(char *id, char *name, double price, int pages){
    ID = id;
    Name = name;
    Price = price;
    Pages = pages;
}

Library::Library(void){
    ID = NULL;
    Name = NULL;
    Price = 0.0;
    Pages = 0;
}

void Library::setID(char *id){
    ID = id;
}

char* Library::getID(){
    return ID;
}

void Library::setName(char *name){
    Name = name;
}

char* Library::getName(){
    return Name;
}

void Library::setPrice(double price){
    Price = price;
}

double Library::getPrice(){
    return Price;
}

void Library::setPages(int pages){
    Pages = pages;
}

int Library::getPages(){
    return Pages;
}

void Library::showBook(){
    cout << "Description of " << Name << ":" << endl;
    cout << "The ID of the book: " << ID << endl;
    cout << "The price of the book: " << Price << endl;
    cout << "The number of pages: " << Pages << endl;
}