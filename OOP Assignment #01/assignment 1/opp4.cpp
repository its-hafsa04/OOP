// greatest number among three numbers entered by the user
#include<iostream>
using namespace std;
class call{
	private:
		int x;
		int y;
		int z;
		public:
			void inputdata(){
				cout<<"enter the first number:";
				cin>>x;
				cout<<"enter the second number:";
				cin>>y;
				cout<<"enter the third number:";
				cin>>z;
			}
			void displayoutput(){
				if(x>=y && x>=z){
					cout<<"the first number is greater:"<<endl;
					}
					else if(y>=x && y>=z){
						cout<<"the second number is greater:"<<endl;
					}
					else if(z>=x && z>=y){
						cout<<"the third number is greater:"<<endl;
					}
						}

};
main(){
	call Z;
	Z.inputdata();
	Z.displayoutput();
}















