#include<iostream>
using namespace std;
class complex; //forward declare
class cal{
	public:
		int add(int a,int b){
			return (a+b);
		}
		int sumCom(complex, complex);
		int sumCCom(complex, complex);
};
class complex{
	int a,b;
	
	//individually declaring fncs
	//friend int cal::sumCom(complex, complex);//declare
	//friend int cal::sumCCom(complex, complex);//declare
	
	//declaring whole class
	friend class cal;
	
	public:
		void setnum(int n1, int n2){
			a=n1;
			b=n2;
		}
		void print(){
			cout<<"no.s are "<<a <<" + "<<b<<"i"<<endl;
		}
};

int cal::sumCom(complex o1, complex o2){ //define
			return (o1.a + o2.a);
		}
		int cal::sumCCom(complex o1, complex o2){ //define
			return (o1.b + o2.b);
		}

int main(){
	complex o1,o2;
	o1.setnum(2,7);
	o2.setnum(3,9);
	
	cal c,s;
	int r = c.sumCom(o1,o2);
	int com = s.sumCCom(o1,o2);
	cout<<"the result of real is "<<r<<endl;
	cout<<"the result of com is "<<com<<endl;
	
	return 0;
}
