//Write a program in C++ that implement the concept of abstraction using three classes - a base class Human and two derived
//classes male and Female. The base class should declare at least two pure virtual functions. First virtual function 
//takes properties of Human and second function give the eating food of Human. The derived classes should provide their own 
//implementations for these functions with 2 more concrete functions. In the main function.
#include <iostream>
#include <string>
using namespace std;
// Abstract base class Human
class Human {
public:
    // Pure virtual function to take properties of Human
    virtual void takeProperties() = 0;

    // Pure virtual function to give the eating habit of Human
    virtual void eatingHabit() = 0;

};

// Derived class Male
class Male : public Human {
public:
    // Implementation of takeProperties for Male
    void takeProperties() {
        cout << "Male has physical and biological properties." <<endl;
    }

    // Implementation of eatingHabit for Male
    void eatingHabit(){
        cout << "Male prefers a balanced diet with protein." << endl;
    }

    // Additional concrete function for Male
    void watchSports(){
        cout << "Enjoys watching sports like football and basketball." <<endl;
    }

    // Additional concrete function for Male
    void groom(){
        cout << "Pays attention to grooming and personal style." << endl;
    }
};

// Derived class Female
class Female : public Human {
public:
    // Implementation of takeProperties for Female
    void takeProperties() {
        std::cout << "Female has physical and biological properties." << std::endl;
    }

    // Implementation of eatingHabit for Female
    void eatingHabit() {
        cout << "Female maintains a balanced diet with a focus on nutrients." <<endl;
    }

    // Additional concrete function for Female
    void shop() {
        cout << "Enjoys shopping for fashion and accessories." << endl;
    }

    // Additional concrete function for Female
    void multitask() {
        cout << "Skilled at multitasking in various aspects of life." <<endl;
    }
};

int main() {
    // Example usage:
    Male john;
    Female mary;

    // Functions specific to Male
    john.takeProperties();
    john.eatingHabit();
    john.watchSports();
    john.groom();

    // Functions specific to Female
    mary.takeProperties();
    mary.eatingHabit();
    mary.shop();
    mary.multitask();

    return 0;
}

