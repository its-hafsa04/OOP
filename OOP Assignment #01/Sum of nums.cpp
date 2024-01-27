#include <iostream>
using namespace std;

class Add {
	private:
    int num1;
    int num2;
    int sum;
    
public:
    void inputNos() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }
    void calcSum() {
        sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum <<endl;
    }
};

int main() {
    Add calcu;
    calcu.inputNos();
    calcu.calcSum();
     return 0;
}

