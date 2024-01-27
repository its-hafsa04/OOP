#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age;
    }
};

class Student : public Person {
private:
    string studentId;
    double grade;

public:
    Student(const std::string& n, int a, const std::string& id, double g)
        : Person(n, a), studentId(id), grade(g) {}

    void displayStudentInfo() {
        displayInfo(); // Inherit and call the base class method
        cout << ", Student ID: " << studentId << ", Grade: " << grade <<endl;
    }
};

int main() {
    Student student("Hafsa", 19, "12345", 95.5);
     cout << "Student Information: ";
    student.displayStudentInfo();

    return 0;
}

