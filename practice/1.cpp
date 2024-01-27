//compile time
#include<iostream>
using namespace std;
int sub(int n1, int n2){
	return n1 - n2;
}
int sub(double n1, double n2){
	return n1 - n2;
}
int sub(int n1, int n2, int n3){
	return n1 - n2 - n3;
}
main(){
	cout<<"int 2 no.s sub is"<<sub(4,2)<<endl;
	cout<<"double sub is"<<sub(4.9,2.2)<<endl;
	cout<<"int 3 no.s sub is"<<sub(4,2,1)<<endl;
	return 0;
}
