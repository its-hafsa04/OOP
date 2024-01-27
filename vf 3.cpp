//Define a base class Shape with a virtual function calculateArea(). 
//Derive classes Circle and Rectangle from Shape and override calculateArea() for each shape.
#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double calculateArea() {
        return 0.0; // Default implementation for base class
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double calculateArea() override {
        return 3.14 * radius * radius; // Simple approximation of Pi for beginners
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    double calculateArea() override {
        return width * height;
    }
};

int main() {
    Circle circle;
    circle.setRadius(5.0);

    Rectangle rectangle;
    rectangle.setDimensions(4.0, 6.0);

    cout << "Area of the circle: " << circle.calculateArea() << endl;
    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}

