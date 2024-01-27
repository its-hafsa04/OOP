#include <iostream>
#include <string>

using namespace std;

class Person {

public:
	string name;
    int age;
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age;
    }
};

class Student : public Person {

public:
    string studentId;
    double grade;
    void displayStudentInfo() {
        displayInfo();
        cout << ", Student ID: " << studentId << ", Grade: " << grade << endl;
    }
};

int main() {
    Student student;
    student.name = "Hafsa";
    student.age = 19;
    student.studentId = "12345";
    student.grade = 95.5;

    cout << "Student Information: ";
    student.displayStudentInfo();

    return 0;
}

