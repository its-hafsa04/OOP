#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Animal makes a generic sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal animal1;
    Dog dog;
    Cat cat;

    animal1.makeSound();
    dog.makeSound();
    cat.makeSound();

    return 0;
}

