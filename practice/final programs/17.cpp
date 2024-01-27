//define a base class University with 3 private variables,  A function Print() , A virtual function Input(). Derive a class
//Department from Base and override Input ()  and Print(). Create objects and pointer of both classes and call the display()
// method to observe dynamic binding.
#include <iostream>
#include <string>
using namespace std;

class University {
private:
    string name;
    int rank;
    int numStudents;

public:
   
    virtual void Input() {
        cout << "Enter University Name: "; 
        cin >> name;
        cout << "Enter University Rank: ";
        cin >> rank;
        cout << "Enter Number of Students: ";
        cin >> numStudents;
    }

    void Print(){
        cout << "University Name: " << name << endl;
        cout << "University Rank: " << rank << endl;
        cout << "Number of Students: " << numStudents << endl;
    }
};

class Department : public University {
private:
    string departmentName;
    int numFaculty;

public:
    void Input(){
        University::Input();  // Call base class Input() for common input
        cout << "Enter Department Name: ";
        cin >> departmentName;
        cout << "Enter Number of Faculty: ";
        cin >> numFaculty;
    }

    void Print(){
        University::Print();  // Call base class Print() for common output
        cout << "Department Name: " << departmentName << endl;
        cout << "Number of Faculty: " << numFaculty << endl;
    }
};

int main() {
    University universityObj;
    Department departmentObj;

    University* universityPtr = &universityObj;
    University* departmentPtr = &departmentObj;

    cout << "Enter details for University:" << endl;
    universityPtr->Input();

    cout << "\nEnter details for Department:" << endl;
    departmentPtr->Input();

    cout << "\nDisplaying University Information:" << endl;
    universityPtr->Print();

    cout << "\nDisplaying Department Information:" << endl;
    departmentPtr->Print();

    return 0;
}


