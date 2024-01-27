#include <iostream>
using namespace std;
class Fi {
public:
    void generateFi(int length) {
        if (length <= 0) {
            cout << "Invalid" << endl;
            return;
        }

        int a = 0, b = 1, next;
        cout << "Fibonacci series is : ";

        if (length >= 1) {
            cout << a;
        }

        for (int i = 2; i <= length; i++) {
            cout << endl << b;
            next = a + b;
            a = b;
            b = next;
        }

        cout <<endl;
    }
};

int main() {
    Fi ge;
    int length;
    cout << "Enter the length: ";
 cin >> length;
    ge.generateFi(length);
 return 0;
}

