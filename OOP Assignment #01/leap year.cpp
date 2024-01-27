// leap year
#include<iostream>
using namespace std;
class leapyear{
	private:
		int year;
		public:
			void input(){
				cout<<"enter the year:";
				cin>>year;
			}
			void displayoutput(){
				if((year%4==0 && year%100==0) || (year%400==0))
				cout<<"year is leap.";
				else
				cout<<"year is not leap.";
			}
};
main(){
	leapyear Y;
	Y.input();
	Y.displayoutput();
}
