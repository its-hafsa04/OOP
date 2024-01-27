#include <iostream>
using namespace std;
class Vehicle {
protected:
    int speed;
public:
    Vehicle(int s) : speed(s) {}
};

class Car : public Vehicle {
public:
    Car(int s) : Vehicle(s) {}

    void displaySpeed() {
        cout << "Car's speed: " << speed << " mph" <<endl;
    }
};

int main() {
    Car car(60); // Create a Car object with a speed of 60 mph
    car.displaySpeed();

    return 0;
}

