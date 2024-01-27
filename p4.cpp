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
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() override {
        return width * height;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    cout << "Area of the circle: " << shape1->calculateArea() <<endl;
    cout << "Area of the rectangle: " << shape2->calculateArea() <<endl;

    delete shape1;
    delete shape2;

    return 0;
}

