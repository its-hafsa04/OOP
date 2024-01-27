#include<iostream>
using namespace std;
class A{
	int a;
	public:
		void set(int a){
			this->a = a;
		}
		void get(){
			cout<<"the value of a is "<<a<<endl;
		}
};
int main(){
	//this is a pointer that points to object which invokes member function
	A a;
	a.set(10);
	a.get();
	return 0;
} 
