#include <iostream>
using namespace std;
// Abstract class
class Shape {
public:
    // Pure virtual function (abstract method)
    virtual void draw() = 0;

    // Non-abstract method
    void printDes(){
        cout << "This is a shape." << endl;
    }
};

// Concrete subclass of Shape
class Circle : public Shape {
public:
    // Implementation of the draw method for Circle
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

// Another concrete subclass of Shape
class Square : public Shape {
public:
    // Implementation of the draw method for Square
    void draw() {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    // Create instances of concrete classes
    Circle circle;
    Square square;

    // Call methods on instances
    circle.draw();
    circle.printDes();

    square.draw();
    square.printDes();

    return 0;
}
