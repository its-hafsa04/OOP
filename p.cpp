#include<iostream>
using namespace std;
class Base{
	public:
		Base()
		{
			cout<<"this is const of base class"<<endl;
		}
		~Base()
		{
			cout<<"this is dest of base class"<<endl;
		}
};
class Drived: public Base{
	public:
		Drived()
		{
			cout<<"this is const of dr class"<<endl;
		}
		~Drived()
		{
			cout<<"this is dest of dr class"<<endl;
		}
};
main(){
	cout<<"now declaring dr of d"<<endl;
	Drived d;
	cout<<"now going to end"<<endl;
	return 0;
}
