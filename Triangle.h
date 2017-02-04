//
// Created by Ashiqur Rahman on 1/31/17.
//

#ifndef TRIANGLE
#define TRIANGLE

template <typename T>
class Triangle {

private:
    T base;
    T height;

public:
    Triangle();
    void setBase(T);
    void setHeight(T);
    T getHypotenuse();
    T getArea();

};

#endif // TRIANGLE
