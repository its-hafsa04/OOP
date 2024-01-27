//Write a program using polymorphism in which user enters the number if the number is positive and the number is also even, 
//then print the cube of the number and if the number is odd and negative then print the square of the number.
#include <iostream>
using namespace std;

class NumberProcessor {
public:
    virtual void processNumber(int number) {
        // Base class implementation does nothing
    }
};

class PositiveEvenNumberProcessor : public NumberProcessor {
public:
    void processNumber(int number) override {
        if (number > 0 && number % 2 == 0) {
            int cube = number * number * number;
            cout << "Cube of positive even number " << number << ": " << cube << endl;
        }
    }
};

class NegativeOddNumberProcessor : public NumberProcessor {
public:
    void processNumber(int number) override {
        if (number < 0 && number % 2 != 0) {
            int square = number * number;
            cout << "Square of negative odd number " << number << ": " << square << endl;
        }
    }
};

int main() {
    // Get input from the user
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Process the number using polymorphism
    if (number > 0 && number % 2 == 0) {
        PositiveEvenNumberProcessor processor;
        processor.processNumber(number);
    } else if (number < 0 && number % 2 != 0) {
        NegativeOddNumberProcessor processor;
        processor.processNumber(number);
    } else {
        cout << "Number does not meet the specified conditions." << endl;
    }

    return 0;
}


