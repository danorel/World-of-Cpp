//
// Created by Dan Orel on 2/14/18.
//
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
// constants
const int Counter = 5;
//
#ifndef FILES_FILES_H
#define FILES_FILES_H
// Structures
struct Object{
    int Key;
};
struct Stack{
    Object Var;
    Stack *Next;
};
// End
#endif //FILES_FILES_H
