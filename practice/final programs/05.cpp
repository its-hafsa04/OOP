//Write a C++ program that take integer from user using constructor. Calculates the sum of all multiples of 3 or 5 below a 
//given positive integer n. For example, if n is 10, the program should find the sum of all multiples of 3 or 5 below 10,
// which are 3, 5, 6, and 9, and the result should be 23 (3 + 5 + 6 + 9). 
#include <iostream>
using namespace std;
class SumMultiples {

public:
	int n;
    // Constructor to get input from the user
    SumMultiples() {
        cout << "Enter a positive integer (n): ";
        cin >> n;
    }

    // Method to calculate the sum of multiples of 3 or 5 below n
    int calculateSum() {
        int sum = 0;

        for (int i = 1; i < n; ++i) {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i;
            }
        }

        return sum;
    }
};

int main() {
    // Create an instance of SumMultiples, which gets the input from the user
    SumMultiples sumMultiples;

    // Calculate and display the sum of multiples of 3 or 5 below n
    int result = sumMultiples.calculateSum();
    cout << "The sum of multiples of 3 or 5 below " << sumMultiples.n << " is: " << result << endl;

    return 0;
}

