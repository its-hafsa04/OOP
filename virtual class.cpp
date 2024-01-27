#include<iostream>
using namespace std;
class base{
	public:
		 virtual void print(){
			cout<<"print the base class"<<endl;
		}
		void show(){
			cout<<"show the base class"<<endl;
		}
};
class derived : public base{
	public:
		void print(){
			cout<<"print the derived class"<<endl;
		}
		void show(){
			cout<<"show the derived class"<<endl;
		}
};
main(){
	base *pt;
	derived d;
	pt = &d;
	//virtual function, runtime 
	pt->print();
	//non virtual function, compile time
	pt->show();
}
