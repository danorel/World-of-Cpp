//
// Created by Dan Orel on 2/15/18.
//
#include "Recursion.h"

void Rec(int level){
    if(level == 0){
        cout << "Level = 0" << endl;
        return;
    }
    cout << "Down to level " << level << endl;
    Rec(level-1);
    cout << "Up to level " << level << endl;
}
