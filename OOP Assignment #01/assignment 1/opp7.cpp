// calculator
#include<iostream>
using namespace std;
class calculator{
	    private:
	    int x;
	    int y;
	    int sum;
	    int subs;
	    int mult;
	    int divi;
	    public:
	    	void inputdata(){
	    		cout<<"enter the first integer:";
	    		cin>>x;
	    		cout<<"enter the second integer:";
	    		cin>>y;
			}
			void displaysum(){
				sum=x+y;
				cout<<"the sum of two integer:"<<sum<<endl;
			}
			void displaysub(){
				subs=x-y;
				cout<<"the sub of two integers:"<<subs<<endl;
				
			}
			void displaymult(){
				mult=x*y;
				cout<<"the mult of two numbers:"<<mult<<endl;
			}
			void displaydivi(){
				divi=x/y;
				cout<<"div of two numbers:"<<divi<<endl;
			}
		};
		main(){
			calculator C;
			int choose;
			cout<<"..............MAIN MENU........."<<endl;
			cout<<"press 1 to sum the integers:"<<endl;
			cout<<"press 2 to substract the integers:"<<endl;
			cout<<"press 3 to multiply the integers:"<<endl;
			cout<<"press 4 to divide the integers:"<<endl;
			cin>>choose;
			C.inputdata();
			if(choose==1){
				C.displaysum();
			}
			else if(choose==2){
				C.displaysub();
			}
			else if(choose==3){
				C.displaymult();
			}
			else if(choose==4){
				C.displaydivi();
			}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
