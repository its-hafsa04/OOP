#include<iostream>
using namespace std;
class Employee{
	public:
		int id;
		int salary;
		void in(){
			cout<<"the employee id is: "<<endl;
			cin>>id;
			cout<<"the salary of employee is"<<endl;
			cin>>salary;
		}
};
class Manager:public Employee{
	int id;
	int salary;
	string depart="HEC management";
		public:
	void management(){
		cout<<"the manager manages the office work he works in "<<depart<<endl;
	}
};
class Engineer:public Employee{
	string site="office";
	public:
		void visitsite(){
			cout<<"the engineer visit the "<<site<<" site";
		}
};
main(){
	Manager m;
	m.in();
	m.management();
	Engineer n;
	n.visitsite();
}
