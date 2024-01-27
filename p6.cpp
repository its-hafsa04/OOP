#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;

    void publicFunction() {
        cout << "Base::publicFunction() called" << endl;
    }

    void protectedFunction() {
        cout << "Base::protectedFunction() called" << endl;
    }

protected:
    int protectedVar;
};

class Derived : public Base {
public:
    void accessBaseMembers() {
        cout << "Derived class accessing Base class members:" << endl;
        cout << "publicVar: " << publicVar << endl;
        cout << "protectedVar: " << protectedVar << endl;
        publicFunction();
        protectedFunction();
    }
};

int main() {
    Derived derivedObj;
    derivedObj.accessBaseMembers();

    cout << "Accessing Base class members from the Main function:" << endl;
    cout << "publicVar: " << derivedObj.publicVar << endl;
    derivedObj.publicFunction();
    
    return 0;
}

