#include <iostream>
#include <string>
using namespace std;
class Reverse {
public:
    string reverseString(const string& input) {
        string reversed;
        for (int i = input.length() - 1; i >= 0; i--) {
            reversed += input[i];
        }
        return reversed;
    }
};

int main() {
    Reverse rev;
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string reversed = rev.reverseString(input);
    cout << "Reversed string: " << reversed <<endl;

    return 0;
}

