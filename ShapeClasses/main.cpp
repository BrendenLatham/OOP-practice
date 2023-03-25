#include <iostream>
#include "myshapes.h"

using namespace std;

int main()
{
    double SquareSide,RectangleHeight,RectangleWidth,TriangleHeight,TriangleWidth,CircleRadius,SphereRadius,CubeSide;

    cout << "Enter a side length for a square: ";
    cin >> SquareSide;
    cout<<endl;
    Square MySquare(SquareSide);

    cout << "Enter a height for a rectangle: ";
    cin >> RectangleHeight;
    cout<<endl;
    cout << "Enter a width for a rectangle: ";
    cin >> RectangleWidth;
    cout<<endl;
    Rectangle MyRectangle(RectangleHeight,RectangleWidth);

    cout << "Enter a height for a right triangle: ";
    cin >> TriangleHeight;
    cout<<endl;
    cout << "Enter a width for a right triangle: ";
    cin >> TriangleWidth;
    cout<<endl;
    RightTriangle MyRightTriangle(TriangleHeight,TriangleWidth);

    cout << "Enter a radius for a circle: ";
    cin >> CircleRadius;
    cout<<endl;
    Circle MyCircle(CircleRadius);

    cout << "Enter a radius for a sphere: ";
    cin >> SphereRadius;
    cout<<endl;
    Sphere MySphere(SphereRadius);

    cout<< "Enter a side for a cube: ";
    cin >> CubeSide;
    cout<<endl;
    Cube MyCube(CubeSide);


    MySquare.info();
    MyRectangle.info();
    MyRightTriangle.info();
    MyCircle.info();
    MySphere.info();
    MyCube.info();
    return 0;
}
