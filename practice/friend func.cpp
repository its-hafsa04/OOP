#include <iostream>
using namespace std;
class MyClass {
private:
    int privateMember;

public:
    MyClass() : privateMember(0) {}

    // Declaration of a friend function
    friend void friendFunction(MyClass obj);

    // Member function
    void setPrivateMember(int value) {
        privateMember = value;
    }
};

// Definition of the friend function
void friendFunction(MyClass obj) {
    cout << "Friend function accessing private member: " << obj.privateMember << endl;
}

int main() {
    MyClass myObject;
    myObject.setPrivateMember(42);

    // Call the friend function
    friendFunction(myObject);

    return 0;
}

