//Write a C++ program that calculates the sum of all multiples of 3 or 5 below a given positive integer n.
// For example, if n is 10, the program should find the sum of all multiples of 3 or 5 below 10, which are 3, 5, 6, and 9, 
//and the result should be 23 (3 + 5 + 6 + 9). 
#include <iostream>
using namespace std;
int main() {
    // Get the input from the user
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    // Initialize the sum
    int sum = 0;

    // Iterate through numbers below n and add multiples of 3 or 5 to the sum
    for (int i = 1; i < n; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    // Display the result
    cout << "The sum of multiples of 3 or 5 below " << n << " is: " << sum << endl;

    return 0;
}

