#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
		A(){
			a= 10;
		}
		friend void show(A,B);//function declared
};
class B{
	int b;
	public:
		B(){
			b = 12;
		}
		friend void show(A,B);//function declared
};
void show(A x, B y){//function define
int r;
	r= x.a + y.b;
	cout<<"value of class A : "<<x.a<<endl;
	cout<<"value of class B : "<<y.b<<endl;
	cout<<"sum of class A+B : "<<r<<endl;
}
int main(){
	A o1;
	B o2;
	
	show(o1,o2);
	
	return 0;
}
