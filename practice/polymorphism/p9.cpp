#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a generic sound" <<endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" <<endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" <<endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() override {
        cout << "Cow moos" <<endl;
    }
};

int main() {
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < 3; i++) {
        animals[i]->makeSound(); // Calls the appropriate overridden makeSound() method
        delete animals[i];
    }

    return 0;
}

