// convert temp from fahrenheit to celsius
#include<iostream>
using namespace std;
class temp{
	private:
		int F;
		int celsius;
		public:
			void inputdata(){
				cout<<"enter the temp in fahrenheit:";
				cin>>F;
			}
			void displayoutput(){
				celsius=(F-32)*5/9;
				cout<<"the temperature in celsius is:"<<celsius<<endl;
			}
		
};
main(){
	temp T;
	T.inputdata();
	T.displayoutput();
}
