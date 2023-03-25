#ifndef MYSHAPES_H
#define MYSHAPES_H

#include <math.h>

using namespace std;

class Square{
private:
    double side,perimeter,area;
public:
    double get_perimeter(double side){
        return side*4;
    }
    double get_area(double side){
        return side*side;
    }
    Square(double side){
        this->side = side;
        perimeter = get_perimeter(side);
        area = get_area(side);
    }
    void info(){
        cout<< "My square side length is " << side << ", the perimeter is " << get_perimeter(side) << ", the area is " << get_area(side) << "." <<endl;
    }
};

class Rectangle{
private:
    double height,width,perimeter,area;
public:
    double get_perimeter(double height, double width){
        double perimeter = height+width;
        return perimeter*2;
    }
    double get_area(double height, double width){
        return height*width;
    }
    Rectangle(double height, double width){
        this->height = height;
        this->width = width;
        perimeter = get_perimeter(height, width);
        area = get_area(height, width);
    }
    void info(){
        cout<< "My rectangle height is " << height << " and width is " << width << ", the perimeter is " << get_perimeter(height, width) << ", the area is " << get_area(height, width) << "." <<endl;
    }

};

class Circle{
private:
    double radius,circumference,area;
public:
    double get_circumference(double radius){
        return 2*3.14*radius;
    }
    double get_area(double radius){
        return 3.14*radius*radius;
    }
    Circle(double radius){
        this->radius = radius;
        circumference = get_circumference(radius);
        area = get_area(radius);
    }
    void info(){
        cout << "My circle radius is " << radius << ", the circumference is " << get_circumference(radius) << ", the area is " << get_area(radius) << "." <<endl;
    }
};

class RightTriangle{
private:
    double height,width,perimeter,area;
public:
    double get_perimeter(double height, double width){
        double hypotenuse = sqrt((height*height)+(width*width));
        return height+width+hypotenuse;
    }
    double get_area(double height, double width){
        return height*width*.5;
    }
    RightTriangle(double height, double width){
        this->height = height;
        this->width = width;
        perimeter = get_perimeter(height, width);
        area = get_area(height,width);
    }
    void info(){
        cout<< "My right angled triangle's height is " << height << " and width is " << width << ", the perimeter is " << get_perimeter(height, width) << ", the area is " << get_area(height, width) << "." <<endl;
    }

};

class Sphere{
private:
    double radius,surfacearea,volume;
public:
    double get_surfacearea(double radius){
        return 4*3.14*radius*radius;
    }
    double get_volume(double radius){
        return (4*3.14*radius*radius*radius)/3;
    }
    Sphere(double radius){
        this->radius = radius;
        surfacearea = get_surfacearea(radius);
        volume = get_volume(radius);
    }
    void info(){
        cout << "My sphere radius is " << radius << ", the surface are is " << get_surfacearea(radius) << ", the volume is " << get_volume(radius) << "." <<endl;
    }
};

class Cube{
private:
    double side,surfacearea,volume;
public:
    double get_surfacearea(double side){
        return side*side*6;
    }
    double get_volume(double){
        return side*side*side;
    }
    Cube(double side){
        this->side = side;
        surfacearea = get_surfacearea(side);
        volume = get_volume(side);
    }
    void info(){
        cout << "My cube side length is " << side << ", the surface area is " << get_surfacearea(side) << ", the volume is " << get_volume(side) << "." <<endl;
    }
};

#endif // MYSHAPES_H
