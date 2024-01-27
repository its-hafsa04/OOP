#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base::display()" <<endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived::display()" <<endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* ptr1 = &baseObj;
    Base* ptr2 = &derivedObj;

    cout << "Calling display() through a Base class object:" <<endl;
    baseObj.display();

    cout << "Calling display() through a Derived class object:" <<endl;
    derivedObj.display();

    cout << "Calling display() through a Base class pointer pointing to a Base class object:" <<endl;
    ptr1->display();
    cout << "Calling display() through a Base class pointer pointing to a Derived class object:" <<endl;
    ptr2->display();

    return 0;
}

