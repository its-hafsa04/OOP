//Create a base class Animal with a method makeSound(). Derive two classes Dog and Cat from Animal and override the 
//makeSound() method to represent the sound each animal makes. Handle exception when access wrong function of makesound.
#include <iostream>
#include <stdexcept>
using namespace std;
class Animal {
public:
    virtual void makeSound() {
        cout << "Some generic sound" << endl;
    }

};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }

};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }

};

int main() {
    try {
        Animal* animal1 = new Dog();
        Animal* animal2 = new Cat();

        // Accessing the makeSound function of the base class
        animal1->makeSound();
        animal2->makeSound();

    }
    catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

