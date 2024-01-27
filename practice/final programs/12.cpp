//Write a program that calculates the square root of a number. Catch exceptions for negative numbers and non-numeric input 
//using multiple catch blocks for different exception types. 
#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;
int main() {
    try {
        // Prompt user to enter a number
        cout << "Enter a number to calculate its square root: ";
        double number;
        cin >> number;

        // Check for non-numeric input
        if (cin.fail()) {
            throw invalid_argument("Invalid input. Please enter a valid numeric value.");
        }

        // Check for negative numbers
        if (number < 0) {
            throw domain_error("Cannot calculate square root of a negative number.");
        }

        // Calculate and display the square root
        double result = sqrt(number);
        cout << "Square root of " << number << " is: " << result << endl;

    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const domain_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

