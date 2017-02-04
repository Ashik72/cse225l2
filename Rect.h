//
// Created by Ashiqur Rahman on 1/31/17.
//

#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED

template <typename T>
class Rect {

private:
    T width;
    T height;

public:
    Rect();
    void setWidth(T);
    void setHeight(T);
    T getArea();

};


#endif // RECT_H_INCLUDED
