#include "List.h"
void Init(List **);
void printIt(List *);
void AddatBeginning(List **, Object &);
void Insert(List **, Object &);

int main() {
    List *Begin = NULL;
    Object obj, testINS, DoubletestINS;
    obj.Key = -1;
    testINS.Key = -2;
    DoubletestINS.Key = 10;
    Begin = new List;
    Init(&Begin);
    printIt(Begin);
    AddatBeginning(&Begin, obj);
    printIt(Begin);
    Insert(&Begin, testINS);
    printIt(Begin);
    Insert(&Begin, DoubletestINS);
    printIt(Begin);
    return 0;
}