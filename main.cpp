#include <iostream>
#include "Triangle.cpp"
#include "Rect.cpp"

using namespace std;

int main()
{

    Triangle<int> t1;

    cout << "Sample output 1:" << endl;

    cout << "Enter the Base:" << endl;
    int base;
    cin >> base;
    t1.setBase(base);

    cout << "Enter the Height:" << endl;
    int height;
    cin >> height;
    t1.setHeight(height);

    cout << "Value of Hypotenuse:" << endl;
    cout << t1.getHypotenuse()<< endl;

    cout << "Area of the Triangle:" << endl;
    cout << t1.getArea() << endl;

    ///Double
    Triangle<double> t2;

    cout << "Sample output 2:" << endl;

    cout << "Enter the Base:" << endl;
    double baseD;
    cin >> baseD;
    t2.setBase(baseD);

    cout << "Enter the Height:" << endl;
    double heightD;
    cin >> heightD;
    t2.setHeight(heightD);

    cout << "Value of Hypotenuse:" << endl;
    cout << t2.getHypotenuse() << endl;

    cout << "Area of the Triangle:" << endl;
    cout << t2.getArea() << endl;

    ///Rectangle
    Rect<int> r1;

    cout << "Sample output 1:" << endl;

    cout << "Enter the Width:" << endl;
    int baser;
    cin >> baser;
    r1.setWidth(baser);

    cout << "Enter the Height:" << endl;
    int heightr;
    cin >> heightr;
    r1.setHeight(heightr);


    cout << "Area of the Rectangle:" << endl;
    cout << r1.getArea() << endl;

    ///Double
    Rect<double> r2;

    cout << "Sample output 2:" << endl;

    cout << "Enter the Width:" << endl;
    double baseDr;
    cin >> baseDr;
    r2.setWidth(baseDr);

    cout << "Enter the Height:" << endl;
    double heightDr;
    cin >> heightDr;
    r2.setHeight(heightDr);

    cout << "Area of the Rectangle:" << endl;
    cout << r2.getArea() << endl;



    return 0;
}
