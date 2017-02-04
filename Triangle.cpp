//
// Created by Ashiqur Rahman on 1/31/17.
//

#include <iostream>
#include "Triangle.h"
#include "math.h"

using namespace std;

template <class T>
Triangle<T>::Triangle() {

    cout << "Test" << endl;
}

template <class T>
void Triangle<T>::setBase(T b) {

    this->base = b;
}

template <class T>
void Triangle<T>::setHeight(T h) {

    this->height = h;
}

template <class T>
T Triangle<T>::getHypotenuse() {
    return sqrt( (pow( base , 2 )) + pow( height , 2) );
}

template <class T>
T Triangle<T>::getArea() {


    return ((base * height)/2);
}

