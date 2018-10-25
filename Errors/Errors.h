//
// Created by Dan Orel on 4/28/18.
//
#include <iostream>
#include <iomanip>
using namespace std;


#ifndef ERRORS_ERRORS_H
#define ERRORS_ERRORS_H

class Box{
public:
    Box (string name) {
        BoxName = name;
    }

    void getVolume() {
        volume = length * width * height;
        cout << "Volume of '" << BoxName << "' is " << volume << endl;
    }

    void setVolume(double h, double w, double l) {
        height = h;
        width = w;
        length = l;
    }

    void getParameters(){
        cout << "Name: " << BoxName << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Length: " << length << endl;

    }

public:
    double height;
    double width;
    double length;
    double volume;
    string BoxName;
};

#endif //ERRORS_ERRORS_H
