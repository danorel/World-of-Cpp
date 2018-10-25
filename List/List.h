//
// Created by Dan Orel on 2/13/18.
//
#include <iostream>
using namespace std;
const int Counter = 5;
#ifndef LIST_LIST_H
#define LIST_LIST_H
struct Object{
    int Key;
};
struct List{
    Object Var;
    List *Next;
};
#endif //LIST_LIST_H
