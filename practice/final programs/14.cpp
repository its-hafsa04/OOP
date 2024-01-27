//Write a program that uses a loop to repeatedly ask the user for input and handle exceptions if the input is not valid 
//(e.g., non-numeric input). Continue until valid input is received
#include <iostream>
using namespace std;

int main() {
    bool validInput = false;

    do {
        // Prompt the user for input
        cout << "Enter a number: ";
        
        // Get user input
        double number;
        cin >> number;

        // Check for non-numeric input
        if (cin.fail()) {
           // cin.clear();  // Clear the error flag
            cerr << "Error: Invalid input. Please enter a valid numeric value." << endl;
        } else {
            // Input is valid
            validInput = true;
            cout << "You entered: " << number << endl;
        }

    } while (!validInput);

    return 0;
}


