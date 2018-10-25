#include "Stack.h"
// prototypes
// Stack Implementation with List

void Push(Stack **, Object);
int Pop(Stack **);
void showStack(Stack *);
void Init(Stack **, Object);


// end
int main() {
    // Stack Implementation with List

    Stack *Start = NULL;
    Object obj, test;
    obj.Key = 1;
//    test.Key = 10;
    Init(&Start, obj);
    showStack(Start);
//    Push(&Start, test);
    showStack(Start);
    while(Start) {
        cout << "Delete this variable: " << Pop(&Start) << endl;
        showStack(Start);
    }
    cout << "Last item is: ";
    showStack(Start);


    // Stack Implementation with dynamic Class

//    Variables var;
//    cout << "Enter the number of elements in Stack: ";
//    cin >> var.Number;
//    Stack st(var.Number);
//
//    for(int count = 0; !st.isFull(); count++){
//        st.Push(count + 1);
//    }
//
//    for(int count = 0; !st.isEmpty(); count++){
//        cout << st.Pop() << endl;
//    }

    return 0;
}