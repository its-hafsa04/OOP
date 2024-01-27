//Write a C++ class to model a basic geometric shape. Include subclasses for circle, rectangle, and triangle, each with 
//appropriate methods to calculate area and perimeter. 
#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

class Circle : public Shape {
private:
    double radius = 6;

public:
    double calculateArea() {
        return 3.14 * radius * radius;
    }

    double calculatePerimeter() {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length=3;
    double width=4;

public:
    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1=2;
    double side2=4;
    double side3=3;

public:
    double calculateArea() {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    cout << "Circle - Area: " << circle.calculateArea() << ", Perimeter: " << circle.calculatePerimeter() << endl;
    cout << "Rectangle - Area: " << rectangle.calculateArea() << ", Perimeter: " << rectangle.calculatePerimeter() << endl;
    cout << "Triangle - Area: " << triangle.calculateArea() << ", Perimeter: " << triangle.calculatePerimeter() << endl;

    return 0;
}

