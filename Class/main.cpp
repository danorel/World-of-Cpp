#include "Class.h"
const int books = 5;
int main() {
    Library book[books];
    Library book1("#1", "Harry Potter, Part 1", 19.99, 784);
    book[0] = book1;
    Library book2("#2", "Harry Potter, Part 2", 24.99, 921);
    book[1] = book2;
    Library book3("#3", "Harry Potter, Part 3", 22.99, 727);
    book[2] = book3;
    Library book4("#4", "Harry Potter, Part 4", 17.99, 619);
    book[3] = book4;
    Library book5("#5", "Harry Potter, Part 5", 25.99, 1042);
    book[4] = book5;
    cout << "Library" << endl;
    cout << "-------------------------------------" << endl;
    for(int i = 0; i < books; i++){
        book[i].showBook();
        cout << "-------------------------------------" << endl;
    }
    return 0;
}