// sum of two integers that entered by the user
#include<iostream>
using namespace std;
class call{
	private:
		int x;
		int y;
		int sum;
		public:
			void inputdata(){
				cout<<"enter the first number:";
				cin>>x;
				cout<<"enter the second number:";
				cin>>y;
			}
			void displaysum(){
				   sum=x+y;
				   cout<<"the sum of two integers:"<<sum<<endl;
				
			}
};
main(){
	call T;
	T.inputdata();
	T.displaysum();
}










