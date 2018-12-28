#include "Olympiad.h"
const int Counter = 5;
// functions
/*
void binary(int);
void reverseBinary(int num);
void printIt(List *);
*/

struct Object {
    int Key;
};

struct List {
    Object Value;
    List *Next;
};
void AddatBegin(List **, Object &);
void printIt(List *);
void Init(List **);
void Insert(List **, Object &);
int main() {
    srand(time(0));
    // Program #1
    /*
    unsigned int dec;
    unsigned int bin;
    cout << "Enter number in decimal system: ";
    cin >> dec;
    if(dec < 0){
        cout << "Failed! It's not a positive number! " << endl;
    } else {
        cout << "Valid entering!" << endl;
        cout << "The binary form of " << dec << " is ";
        binary(dec);
        cout << endl;
        cout << "Let the number change the '1' to '0' and '0' to '1': " << endl;
        cout << "The decimal form of reversed number is ";
        reverseBinary(dec);
    }
    */
    // End #1

    // Program #3
    /*
    int N;
    int K; // - the number, which controls the positions over the board
    int Summary;
    cout << "Enter amount of entrances by the pupil: ";
    cin >> N;
    for(int lessons = 0; lessons < N; lessons++ ){
        K = rand() % 2;
        Summary += K;
    }
    cout << "Summary: " << Summary << endl;
    */
    // End #3

    // Program #4
    /*
    int A;
    int B;
    cout << "[A;B]" << endl;
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;
    while((A > 1000000000 || A < 1) || (B > 1000000000 || B < 1)){
        cout << "Numbers A and B must be positive numbers (from 1 to 1000000000)! " << endl;
        cout << "Enter A: ";
        cin >> A;
        cout << "Enter B: ";
        cin >> B;
    }
    while(A > B){
        cout << "A must be smaller than B! " << endl;
        cout << "Enter A again: ";
        cin >> A;
        cout << "Enter B again: ";
        cin >> B;
    }
    for(int i = A; i < B; i++){
        binary(i);
        cout << endl;
    }
    */
    // End #4

    // Program #5
    /*
    int M, N;
    cout << "Enter desk size: M -> N " << endl;
    cin >> M >> N;
    while((M > 100 || M < 2) || (N > 100 || N < 2)){
        cout << "Enter desk size: M -> N again" << endl;
        cin >> M >> N;
    }
    int **desk = new int*[M];
    int X1, Y1;
    int X2, Y2;
    for(int i = 0; i < M; i++){
        desk[i] = new int[N];
    }
    cout << "Enter X1 between one and M again: ";
    cin >> X1;
    cout << "Enter Y1 between one and N again: ";
    cin >> Y1;
    while((X1 > M || X1 < 1) || (Y1 > N || Y1 < 1)){
        cout << "Enter X1 between one and M again: ";
        cin >> X1;
        cout << "Enter Y1 between one and N again: ";
        cin >> Y1;
    }
    cout << "Valid entering X1,Y1...Processing program..." << endl;
    cout << "Enter X2 between one and M again: ";
    cin >> X2;
    cout << "Enter Y2 between one and N again: ";
    cin >> Y2;
    while((X2 > M || X2 < 1) || (Y2 > N || Y2 < 1)){
        cout << "Enter X2 between one and M again: ";
        cin >> X2;
        cout << "Enter Y2 between one and N again: ";
        cin >> Y2;
    }
    cout << "Valid entering X2,Y2...Processing program..." << endl;
    if(X1 == X2 && Y1 == Y2){
        cout << "0 moves done! " << endl;
    } else if(X1 == X2 && Y1 != Y2){
        cout << "good" << endl;
    }
    */
    // End #5


    // Program #6
    /*
    List *Begin = NULL;
    Begin = new List;
    Begin->Value.Key = 0;
    Begin->Next = NULL;

    List *End = Begin;

    for(int i = 0; i < Counter; i++){
        End->Next = new List;
        End = End->Next;
        End->Value.Key = i + 1;
        End->Next = NULL;
    }

    printIt(Begin);
    */
    // End #6

    // Program #7
    List *Begin = NULL;
    Object obj;
    obj.Key = -1;
    Init(&Begin);
    printIt(Begin);
    AddatBegin(&Begin, obj);
    printIt(Begin);
    // End #7
    return 0;
}

void printIt(List *b){
    List *print = b;
    while(print){
        cout << print->Value.Key << " -> ";
        print = print->Next;
    }
    cout << "NULL" << endl;
}

void Init(List **Begin){
    (*Begin) = new List;
    (*Begin)->Value.Key = 0;
    (*Begin)->Next = NULL;

    List *End = *Begin;

    for(int counter = 0; counter < Counter; counter++){
        End->Next = new List;
        End = End->Next;
        End->Value.Key = counter + 1;
        End->Next = NULL;
    }
}

void AddatBegin(List **Begin, Object &obj){
    List *newBegin = new List;
    newBegin->Value = obj;
    newBegin->Next = (*Begin);
    *Begin = newBegin;
}

void Insert(List **Begin, Object &obj){
    List *ins = new List;
    ins->Value = obj;
    if(*Begin = NULL){
        ins->Next = NULL;
        (*Begin)->Next = ins;
        return;
    }
    List *t = *Begin;
    if(t->Value.Key >= ins->Value.Key){
        ins->Next = t;
    }

}