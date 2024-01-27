#include <iostream>
#include <cmath>
using namespace std;
class Shape {

public:
    double calculateArea() {
        return 0.0;
    }
};

class Circle : public Shape {
public:
    double radius;

    double calculateArea() {
        return M_PI * radius * radius;
    }
};

int main() {
    Circle circle;
    circle.radius = 5.0;
    double area = circle.calculateArea();

    cout << "Area of the circle is: " << area << endl;

    return 0;
}


