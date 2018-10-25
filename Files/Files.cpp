//
// Created by Dan Orel on 2/14/18.
//
#include "Files.h"
// Functions
void Push(Stack **stack, Object obj){
    Stack *push = new Stack;
    push->Var = obj;
    push->Next = (*stack);
    (*stack) = push;
}

int Pop(Stack **stack){
    int value = (*stack)->Var.Key;
    Stack *pop = *stack;
    *stack = (*stack)->Next;
    delete pop;
    return value;
}

void showStack(Stack *stack){
    Stack *print = stack;
    while(print){
        cout << print->Var.Key << " -> ";
        print = print->Next;
    }
    cout << "NULL" << endl;
}

void Init(Stack **stack, Object obj){
    (*stack) = new Stack;
    (*stack)->Var = obj;
    (*stack)->Next = NULL;

    Stack *init = *stack;
    int Count = 0;
    while(Count != 5){
        init->Next = new Stack;
        init = init->Next;
        init->Var.Key = Count + 1;
        Count++;
        init->Next = NULL;
    }

}

bool isEmpty(Stack **stack){
    if(*stack == NULL){
        return true;
    } else {
        return false;
    }
}

void Print(ostream &os){
    os << "Hello, world!" << endl;
}
// End