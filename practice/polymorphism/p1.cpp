#include <iostream>
#include <cmath>
using namespace std;
class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    double calculateArea() {
        return 0.0; // Default implementation for base class
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape(0, 0), radius(r) {}

    double calculateArea() override {
        return M_PI * radius * radius;
    }
};

int main() {
    Circle circle(5.0); // Create a Circle object with a radius of 5 units
    double area = circle.calculateArea(); // Calculate the area of the circle

    cout << "Area of the circle is: " << area <<endl;

    return 0;
}

