#include<iostream>
using namespace std;
class Fact{
	private:
		int num;
		int factorial=1;
		public:
			void calFact()
			{
				cout<<"Enter a num"<<endl;
				cin>>num;
				if(num== 0 || num == 1){
					factorial = 1;
				}
					else{
						for (int i = 1; i <= num; i++) {
                factorial = factorial * i; 
            }
					}
					}
	
			void show() {
				cout<<"Factorial is: "<<factorial;
			}
};
int main()
{
	Fact fac;
	fac.calFact();
	fac.show();
}
