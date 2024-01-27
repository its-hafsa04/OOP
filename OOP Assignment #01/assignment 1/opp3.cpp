// the number is even or odd
#include<iostream>
using namespace std;
class call{
	private:
		int x;
		public:
			void inputdata(){
				cout<<"enter the integer:";
				cin>>x;
			}
			void displayout(){
				if(x%2==0){
					cout<<"the number is even:"<<endl;
				}
				else{
					cout<<"the nmber is odd"<<endl;
				}
			}
};
main(){
	call Q;
	Q.inputdata();
	Q.displayout();
}









