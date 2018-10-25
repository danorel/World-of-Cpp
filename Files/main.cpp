#include "Files.h"
// Prototypes
/*
void Push(Stack **, Object);
int Pop(Stack **);
bool isEmpty(Stack **);
void showStack(Stack *);
void Init(Stack **, Object);
void Print(ostream &);
*/
//
int main() {
    // File type #1:
    /*
    ifstream fin;
    fin.open("file.txt");
    ofstream fout;
    fout.open("file.txt", ios::app);
    // Checking the existence of the file
    if(!fin.is_open()){
        cout << "File doesn't exist! " << endl;
        return -1;
    }
    Object temp;
    temp.Key = 1;
    Stack *stack;
    // Fill stack from file
    while(!fin.eof()){
        fin >> temp.Key;
        // Push elements from list to stack
        Push(&stack, temp);
    }
    //
    showStack(stack);
    // Empty stack:
    while(!isEmpty(&stack)){
        Pop(&stack);
        showStack(stack);
    }
    //
    */
    // End
    // File type #2:
    /*
    fstream fout("file.txt");
    Print(fout);
    Print(cout);
    */
    // End
    // File type #3:
    string fileIn, fileOut;
    cout << "Enter " << "'file.txt'" << " to input data from file!";
    cin >> fileIn;
    ifstream fin(fileIn);
    if(!fin.is_open()){
        cout << "Such a file doesn't exist!" << endl;
        return -1;
    }
    cout << "What is the name of the file in which do U want to output data? ";
    cin >> fileOut;
    ofstream fout(fileOut);
    int x[4], y[4], N = 0;
    while(!fin.eof()){
        if(N % 2 == 0){
            fin >> x[N];
        } else if(N % 2 == 1){
            fin >> y[N];
        }
        N++;
    }
    for(int i = 0; i < 4; i++){
        cout << "(" << x[i] << ";" << y[i] << ")" << endl;
    }
    cout << "AB: " << sqrt(pow(x[1]-x[0],2)+pow(y[1]-y[0],2)) << endl;
    cout << "BC: " << sqrt(pow(x[2]-x[1],2)+pow(y[2]-y[1],2)) << endl;
    cout << "CD: " << sqrt(pow(x[3]-x[2],2)+pow(y[3]-y[2],2)) << endl;
    cout << "AD: " << sqrt(pow(x[1]-x[4],2)+pow(y[1]-y[4],2)) << endl;

    double P = 0;
    double S = 1;
    P = 2 * (sqrt(pow(x[1]-x[0],2)+pow(y[1]-y[0],2)) + sqrt(pow(x[2]-x[1],2)+pow(y[2]-y[1],2)));
    S = sqrt(pow(x[1]-x[0],2)+pow(y[1]-y[0],2)) * sqrt(pow(x[2]-x[1],2)+pow(y[2]-y[1],2));
    fout << "P: " << P << ", S: " << S << endl;

    // End
    return 0;
}


