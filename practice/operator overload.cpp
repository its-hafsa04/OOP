#include<iostream>
using namespace std;
class Count{
	int v;
	public:
		Count() : v(3){}
		void operator ++(){
			++v;
		}
		void display(){
			cout<<"value after increment "<<v<<endl;
		}
		
};
main(){
	Count count;
	++count;
	count.display();
}
