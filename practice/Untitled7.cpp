#include <iostream>
using namespace std;
class MyClass {
private:
    int value;
public:
    MyClass(int value) : value(value) {}
  void setValue(int value) {
        this->value = value;  // Using "this" to access the member variable
    }

    void printAddress() {
        cout << "Memory address of the current object: " << this << endl;
    }
};
int main() {
    MyClass obj1(30);
    MyClass obj2(20);

  obj1.printAddress();  
   obj2.printAddress(); 
 return 0;
}

