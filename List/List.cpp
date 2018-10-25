//
// Created by Dan Orel on 2/13/18.
//
#include "List.h"

void printIt(List *list){
    List *print = list;
    while(print){
        cout << print->Var.Key << " -> ";
        print = print->Next;
    }
    cout << "NULL" << endl;
}

void AddatBeginning(List **list, Object &obj){
    List *atStart = new List;
    atStart->Var = obj;
    atStart->Next = (*list);
    (*list) = atStart;
}

void Insert(List **list, Object &obj){
    List *Ins = new List;
    Ins->Var = obj;

    if(*list == NULL){
        Ins->Next = NULL;
        (*list) = Ins;
        return;
    }

    List *t1 = *list;
    if(t1->Var.Key > Ins->Var.Key){
        Ins->Next = t1;
        (*list) = Ins;
        return;
    }

    List *t2 = *list;
    while(t2){
        if(t2->Var.Key < Ins->Var.Key && Ins->Var.Key < t2->Next->Var.Key){
            t2->Next = Ins;
            Ins->Next = t2;
            return;
        }
    }


}

void Init(List **list){
    (*list)->Var.Key = 0;
    (*list)->Next = NULL;

    List *End = *list;
    for(int count = 0; count < Counter; count++){
        End->Next = new List;
        End = End->Next;
        End->Var.Key = count + 1;
        End->Next = NULL;
    }

}


void Insert(List **list, Object obj){
    List *t1 = *list;
    t1->Var = obj;
    if(*list == NULL){
        (*list) = t1;
        t1->Next = NULL;
        return;
    }
    List *t2 = *list;
    if(t2->Var.Key > t1->Var.Key ){
        t2->Next = t1;
        *list = t1;
        return;
    }
    List *t3 = *list;
    while(t3){
        if(t1->Var.Key > t3->Var.Key && )
    }

}