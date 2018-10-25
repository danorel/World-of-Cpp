//
// Created by Dan Orel on 2/13/18.
//
#include "Stack.h"
// Stack Implementation with List

void Push(Stack **stack, Object obj){
    Stack *push = new Stack;
    push->Var = obj;
    push->Next = (*stack);
    *stack = push;
}

int Pop(Stack **stack){
    int temp = (*stack)->Var.Key;
    Stack *pop = *stack;
    (*stack) = (*stack)->Next;
    delete pop;
    return temp;
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
    for(int count = 1; count <= Counter; count++){
        init->Next = new Stack;
        init = init->Next;
        init->Var.Key = count + 1;
        init->Next = NULL;
    }
}
