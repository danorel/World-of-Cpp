#include "Errors.h"
int main() {

    int Count = 5;
    Box boxes[Count];
    string boxName;
    double height;
    double width;
    double length;

    for(int counter = 0; counter < Count; counter++){
        cout << "Enter the name of box set: ";
        cin >> boxName;
        boxes[counter].BoxName = boxName;
        cout << "Enter the parameters of box set: (height -> width -> length)";
        cin >> height >> width >> length;
        boxes[counter].setVolume(height, width, length);
        boxes[counter].getParameters();
        boxes[counter].getVolume();
    }


    return 0;

}


