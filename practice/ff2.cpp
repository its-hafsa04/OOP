#include<iostream>
using namespace std;
class B;
class A{
	int n1;
	friend int add(A a1, B b1);
	public:
		A() : n1(56){};
};
class B{
	int n2;
	friend int add(A a1, B b1);
	public:
		B() : n2(6){};
};
int add(A a1, B b1){
	return (a1.n1 + b1.n2);
}
main(){
	A a1;
	B b1;
	cout<<"result is "<<add(a1,b1);
}
