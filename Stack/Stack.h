//
// Created by Dan Orel on 2/13/18.
//
#include <iostream>
#include <fstream>
using namespace std;
const int Counter = 5;
#ifndef STACK_STACK_H
#define STACK_STACK_H

// Stack Implementation with List

struct Object{
    int Key;
};
struct Stack{
    Object Var;
    Stack *Next;
};

// Stack Implementation with dynamic Class
//
//class Stack{
//public:
//    Stack(int Number){
//        Max = 100;
//        Index = 0;
//        if(Number <= Max){
//            Array = new int[Number];
//            Max = Number;
//        } else {
//            cout << "Failed! Limit is " << Max << " elements! " << endl;
//        }
//    }
//
//    void Push(int Element){
//        if(Index == Max){
//            cout << "Failed! The stack is full! " << endl;
//        } else {
//            Array[Index] = Element;
//            Index++;
//        }
//    }
//
//    int Pop(){
//        if(Index == 0){
//            cout << "Failed! Can't Pop the last element! " << endl;
//            return 0;
//        } else {
//            return Array[--Index];
//        }
//    }
//
//
//    bool isEmpty(){
//        if(Index == 0){
//            return true;
//        } else {
//            return false;
//        }
//    }
//
//    bool isFull(){
//        if(Index == Max){
//            return true;
//        } else {
//            return false;
//        }
//    }
//
//    ~Stack(){
//        delete []Array;
//    }
//
//private:
//    int *Array;
//    int Index;
//    int Max;
//};
//
//
//// Variables
//struct Variables{
//    int Number;
//};

#endif //STACK_STACK_H
