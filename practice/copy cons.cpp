#include<iostream>
using namespace std;
class My{
	int data;
	public:
	My(){
		cout<<"default constructor"<<endl;
	}
	My(int value) : data(value){
		cout<<"parameterized constrctor"<<endl;
	}
	My(const My& other) : data(other.data){
		cout<<"copy constructor"<<endl;
	}
	void dis(){
		cout<<"data "<<data<<endl;
	}
};
main(){
	My o1,o2(20);
	My o3 = o2;
	o3.dis();
	return 0;
}
