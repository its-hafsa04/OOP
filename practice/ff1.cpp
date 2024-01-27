#include<iostream>
using namespace std;
class Distance{
	int meter;
	friend int addno(Distance);
public:
	Distance() : meter(0){
	};
	
};

int addno(Distance d){
	return d.meter += 5;
}
int main(){
	Distance d;
	cout<<"distance is "<<addno(d);
	return 0;
}
