//Write a program that calculates the average of N integers. The program should prompt the user to enter the value for and 
//then afterward must enter all N N numbers. If the user enters a negative value for N, then an exception should be thrown 
//(and caught) with the message " N must be positive." If there is any exception as the user is entering the N number, an 
//error message should be displayed, and the user prompted to enter the number again.
#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    try {
        if (N < 0) {
            throw runtime_error("N must be positive");
        }

        int sum = 0;
        int num;
        for (int i = 0; i < N; ++i) {
            cout << "Enter number " << i + 1 << ": ";
            cin >> num;
                sum += num;
            }
        
            double average = sum/N;
        cout << "The average of the " << N << " numbers is: " << average << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }

    return 0;
}

