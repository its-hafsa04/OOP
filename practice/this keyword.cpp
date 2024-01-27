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
	A a1;
	a1.set(10);
	a1.get();
	return 0;
} 
