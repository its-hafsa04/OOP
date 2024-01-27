#include<iostream>
using namespace std;
class bank{
	private:
		char name[30];
		char type[10];
		int acc_num;
		int bal;
		public:
			bank(){   //constructor
				bal=0;
			}
			void in(){
				cout<<"name is"<<endl;
				cin>>name;
				cout<<"type is"<<endl;
				cin>>type;
				cout<<"acc num is"<<endl;
				cin>>acc_num;
				cout<<"bal is"<<endl;
				cin>>bal;
			}
			void depo(int amo){
				bal += amo;
				cout<<"amount after depo"<<endl;
			}
			void withd(int amo){
				if(amo > bal){
					cout<<"aount is not enough"<<endl;
				}else
				{
					bal -= amo;
					cout<<"amount after withd"<<endl;
				}
			
			}
			void out(){
				cout<<"name is"<<name<<endl;
				cout<<"type is"<<type<<endl;
				cout<<"acc_num is"<<acc_num<<endl;
				cout<<"bal is"<<bal<<endl;
			}
};
int main(){
	bank b;
	int amo;
	int ch;
	b.in();
	cout<<"ATM";
	cout<<"press 1 for depo"<<endl;
	cout<<"press 2 for withd"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"amo depo"<<endl;
			cin>>amo;
			b.depo(amo);
			break;
			case 2:
			cout<<"amo withd"<<endl;
			cin>>amo;
			b.withd(amo);
			break;
	}
	b.out();
	return 0;
}




