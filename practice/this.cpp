#include <iostream>
using namespace std;
class MyClass {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value;  // Using "this" to differentiate between class member and parameter
    }
 int getValue() {
        return this->value;  // Using "this" to access the class member
    }
};
int main() {
    MyClass obj;
    obj.setValue(10);
    cout << obj.getValue() <<endl;  // Output: 10
    return 0;
}

