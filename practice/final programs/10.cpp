//10.	Define a class to represent a bank account. Include the following members:
//Data members:
//1) Name of the depositor   2) Account number
//3) Type of account    4) Balance amount in the account.
//Member functions:
//1) To assign initial values    2) To deposit an amount
//3) To withdraw an amount after checking the balance       4) To display name and balance.
//Write a main program to test the program.

#include<iostream>
using namespace std;
class bank_account{
	public:
		char name[30];
		int num;
		char type[30];
		int balance;
		void initial_value()
		{
			cout<<"The name of the person: "<<endl;
			cin.getline(name, 30);
			cout<<"Account Type is: "<<endl;
			cin.getline(type, 30);
			cout<<"Account num is: "<<endl;
			cin>>num;
			
			cout<<"Account Balance is : "<<endl;
			cin>>balance;
		}
		void deposite(int amount)
		{
			balance += amount;
			cout<<" Amount after deposite: "<<balance<<endl;
		}
		void withdraw(int amount){
			if(amount>balance){
				cout<<"Amount is not enough"<<endl;
			}
			else{
				balance -=amount;
				cout<<"Amount after with draw"<<balance;
			}
			system("pause");
		}
	void display()
	{
		cout<<"The name of depositor : "<<name<<endl;
		cout<<"Account number is: "<<num<<endl;
		cout<<"Account type is: "<<type<<endl;
		cout<<"Account Balance is : "<<balance<<endl;
		}	
};
main(){
	bank_account H;
	int amount;
	
	int choose;
	H.initial_value();
	cout<<"-------------Atm----------"<<endl;
	cout<<"press 1 to deposite"<<endl;
	cout<<"press 2 to with draw"<<endl;
	cin>>choose;
	switch(choose){
		case 1:
			cout<<"account Deposite: "<<endl;
			cin>>amount;
			H.deposite(amount);
			break;
			case 2:
			cout<<"account With draw: "<<endl;
			cin>>amount;
			H.withdraw(amount);
	}
	
	
	H.display();
}
