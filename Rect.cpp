//
// Created by Ashiqur Rahman on 1/31/17.
//

#include <iostream>
#include "Rect.h"
#include "math.h"

using namespace std;

template <class T>
Rect<T>::Rect() {


}

template <class T>
void Rect<T>::setWidth(T b) {

    this->width = b;
}

template <class T>
void Rect<T>::setHeight(T h) {

    this->height = h;
}

template <class T>
T Rect<T>::getArea() {


    return width * height;
}
