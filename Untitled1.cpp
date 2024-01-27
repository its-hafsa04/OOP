#include<iostream>
#include<string.h>
using namespace std;
int main();

class car{
	//data members
	private:
	int totalcars;
	
	public:
		string name,model;
		int height;
		void inputdata()
		{
			cout<<"car name"<<endl;
			cin>>name;
			cout<<"car model"<<endl;
			cin>>model;
			cout<<"height of car"<<endl;
			cin>>height;
		}
		void setcars(){
			cout<<"total no. of cars"<<endl;
			cin>>totalcars;
		}
	void display(){
		cout<<"the name of car is "<<name<<endl;
		cout<<"the model is "<<model<<endl;
		cout<<"it's height is"<<height<<endl;
	}
	};
main()
{
	car t1;
	t1.inputdata();
	t1.setcars();
	t1.display();
	return 0;
}
	
