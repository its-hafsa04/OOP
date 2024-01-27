//Define a C++ class called Person with attributes for a person's name, age, and address. Include methods to set and
// display these attributes.
#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
    string address;

public:
    // Method to set the attributes
    void setAttributes() {
        cout << "Name: " <<endl;
		cin >> name; 
        cout << "Age: " << endl;
        cin >> age;
        cout << "Address: " << endl;
		cin >> address;
    }

    // Method to display the attributes
    void displayAttributes() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    // Create an instance of the Person class
    Person person;

    // Set attributes using the setAttributes method
    person.setAttributes();

    // Display attributes using the displayAttributes method
    person.displayAttributes();

    return 0;
}

