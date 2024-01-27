#include<iostream>
using namespace std;
class Person{
	public:
	char name[20];
	int age;
	void Eating();
void in(){
	cout<<"Enter the name : "<<endl;
	cin>>name;
	cout<<"Enter the age : "<<endl;
	cin>>age;
}
void out(){
	cout<<"the name of person is : "<<name<<endl;
	cout<<"the age of person is : "<<age<<endl;
}
};
class Student: public Person{
	public:
		int student_id = 20;
		char grade = 'A';
		void Study(){
			cout<<"the student id is : "<<student_id<<endl;
			cout<<"his grades are : "<<grade<<endl;
		}
};
main(){
	Student e;
	e.in();
	e.out();
	e.Study();
}
