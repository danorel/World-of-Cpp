//
// Created by Dan Orel on 2/23/18.
//
#include <iostream>
using namespace std;
#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H


// Queue Implementation with dynamic Class
/*
class Queue{
public:
    Queue(int Number){
        Max = 100;
        Index = 0;
        front = 0;
        back = 0;
        if(Number <= Max){
            Array = new int[Number];
            Max = Number;
        } else {
            cout << "Limit is " << Max << " elements! " << endl;
        }
    }

    ~Queue(){
        delete []Array;
    }

    void Push(int Element){
        if(Index == Max){
            cout << "Failed! The queue is full. Clear it! " << endl;
        } else {
            Array[Index] = Element;
            Index++;
        }
    };

    int Pop(){
        if(Index <= 0){
            cout << "Failed! The queue is empty. Fill it! " << endl;
            return 1;
        } else {
            return Array[back++];
        }
    }

    int Size(){
        return Index;
    }

    int Front(){
        front = Index;
        return Array[front];
    }

    int Back(){
        back = 0;
        return Array[back];
    }

    void Clear(){
        delete []Array;
    }


private:
    int *Array;
    int Index;
    int Max;
    int back;
    int front;
};
*/
// Queue Implementation with Two-Referenced list
class Queue{
public:
    Queue(){
        begin = NULL;
    }

    Queue(int Element){
        begin->Next = new Queue;
        begin->Next = NULL;
        begin->Key = Element;
    }

    void Push(int Element){
        begin->Next = new Queue;
        Queue *temp = begin;
        begin = begin->Next;
        begin->Key = Element;
        begin->Next = NULL;
        begin->Previous = temp;
    }

    int Pop(){
        if(begin->Previous != NULL){
            int temp = begin->Key;
            begin = begin->Previous;
            begin->Next = NULL;
            return temp;
        } else {
            cout << "The Queue is not filled in! Try to pop next time!" << endl;
        }
    }

    void showQueue(){
        while(begin->Next != NULL){
            cout << begin->Key;
            begin = begin->Next;
        }
    }

    void showMenu(){
        cout << "Menu: " << endl
             << "1.Push" << endl
             << "2.Pop" << endl
             << "3.Show Queue" << endl
             << "9.Exit Menu" << endl;
    }

    void Controller(int choice) {
        cout << "Answer: " << choice << endl;
        switch (choice) {
            case 1:
                int Number;
                cout << "What number do U want to fill in? ";
                cin >> Number;
                Push(Number);
                break;
            case 2:
                cout << Pop() << endl;
                break;
            case 3:
                showQueue();
                break;
            case 9:
                cout << "Exit! " << endl;
                break;
            default:
                cout << "Failed! Re-enter the number next time! " << endl;
                break;
        }
    }

    ~Queue(){
        cout << "Queue is deleted!(Destructor)" << endl;
    }

private:
    Queue *begin;
    int Key;
    Queue *Next;
    Queue *Previous;
};
#endif //QUEUE_QUEUE_H
