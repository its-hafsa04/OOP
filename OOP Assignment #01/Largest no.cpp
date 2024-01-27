#include <iostream>
using namespace std;
class Find {
public:
    int findLargest(int num1, int num2, int num3) {
        int largest = num1;

        if (num2 > largest) {
            largest = num2;
        }

        if (num3 > largest) {
            largest = num3;
        }

        return largest;
    }
};

int main() {
    Find f;
    int num1, num2, num3;
    cout << "Enter the first no: ";
    cin >> num1;
    cout << "Enter the second no: ";
    cin >> num2;
    cout << "Enter the third no: ";
    cin >> num3;
    int largest = f.findLargest(num1, num2, num3);
    cout << "The largest no is: " << largest <<endl;
    return 0;
}

