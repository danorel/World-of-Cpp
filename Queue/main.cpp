#include "Queue.h"
int main() {
    // Queue Implementation with dynamic Class
    /*
    Variable var;
    cout << "Enter the number of elements in Queue: ";
    cin >> var.Count;
    Queue que(var.Count);

    for(int count = 0; count < var.Count; count++){
        que.Push(count + 1);
    }

    for(int count = 0; count < var.Count; count++){
        cout << que.Pop() << endl;
    }

    cout << que.Front() << endl;
    */
    // Queue Implementation with Two-Referenced list
    Queue qu;
    int choice;
    do{
        cout << "Use the Menu below: " << endl;
        qu.showMenu();
        cin >> choice;
        qu.Controller(choice);
    } while(choice != 9);
    return 0;
}