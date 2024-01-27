#include<iostream>
using namespace std;
class B;
class A{
	int n1;
	friend class B;
	public:
		A() : n1(38){
		}
};
class B{
	int n2;
	public:
		B() : n2(10){
		}
		int add(){
			A a;
			return (a.n1 + n2);
		}
};
main(){
	B b;
	cout<<"result is "<<b.add();
}
