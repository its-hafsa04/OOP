#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }
    int sub(int num1, int num2) {
        return num1 - num2;
    }
    int mul(int num1, int num2) {
        return num1 * num2;
    }
    int div(int num1, int num2) {
        return num1 / num2;
    }
};

int main() {
    Calculator cal;
    char op;
    int num1, num2;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter first no: ";
    cin >> num1;
    cout << "Enter second no: ";
    cin >> num2;

    int res;
    switch (op) {
        case '+':
            res = cal.add(num1, num2);
            cout << "Result: " << res <<endl;
            break;
        case '-':
            res = cal.sub(num1, num2);
            cout << "Result: " << res <<endl;
            break;
        case '*':
            res = cal.mul(num1, num2);
           cout << "Result: " << res <<endl;
            break;
        case '/':
            res = cal.div(num1, num2);
            cout << "Result: " << res <<endl;
            break;
        default:
            cout << "Invalid operation." <<endl;
    }

    return 0;
}

