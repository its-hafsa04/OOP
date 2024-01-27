#include<iostream>
using namespace std;
class prime{
	private:
		int n;
		int count;
		public:
			void inputdata(){
				cout<<"enter the integer:";
				cin>>n;
			}
			void displayoutput(){
				for(int a=1;a<=n;a++){
					if(n%a==0){
						count++;
					}
				}
				if(count==2){
					cout<<"number is prime:"<<endl;
				}
				else{
					cout<<"number is not prime:"<<endl;
				}
			}
};
main(){
	prime P;
	P.inputdata();
	P.displayoutput();
}

