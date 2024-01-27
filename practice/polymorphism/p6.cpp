#include <iostream>
using namespace std;
class Base {
public:
    int publicVar;
    Base() : publicVar(1), protectedVar(2), privateVar(3) {}

    void publicFunction() {
        cout << "Base::publicFunction() called" <<endl;
    }

    void protectedFunction() {
       cout << "Base::protectedFunction() called" <<endl;
    }

    void privateFunction() {
        cout << "Base::privateFunction() called" <<endl;
    }

protected:
    int protectedVar;

private:
    int privateVar;
};

class Derived : public Base {
public:
    void accessBaseMembers() {
        cout << "Derived class accessing Base class members:" <<endl;
        cout << "publicVar: " << publicVar <<endl;
        cout << "protectedVar: " << protectedVar <<endl;
        // Uncommenting the following line will result in a compilation error
        // std::cout << "privateVar: " << privateVar << std::endl;
        
        publicFunction();
        protectedFunction();
        // Uncommenting the following line will result in a compilation error
        // privateFunction();
    }
};

int main() {
    Derived derivedObj;
    
    derivedObj.accessBaseMembers();
    
    cout << "Accessing Base class members from the Main function:" <<endl;
    cout << "publicVar: " << derivedObj.publicVar <<endl;
    // Uncommenting the following line will result in a compilation error
    // std::cout << "protectedVar: " << derivedObj.protectedVar << std::endl;
    // Uncommenting the following line will result in a compilation error
    // std::cout << "privateVar: " << derivedObj.privateVar << std::endl;

    derivedObj.publicFunction();
    derivedObj.protectedFunction();
    // Uncommenting the following line will result in a compilation error
    // derivedObj.privateFunction();

    return 0;
}

