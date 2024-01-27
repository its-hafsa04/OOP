#include<iostream>
using namespace std;
class fibo{
	   private:
	   	int n;
	   	int t1=0;
	   	int t2=1;
	   	int nextterm=0;
	   	public:
	   		void inputdata(){
	   			cout<<"enter the integer:";
	   			cin>>n;
			   }
			   void displayoutput(){
			   	cout<<"....The fibonacci series:..."<<endl;
			   	for(int i=1;i<=n;++i){
			   		if(i==1){
			   			cout<<t1<<", ";
			   			 continue;
					   }
					    if(i==2){
					   	cout<<t2<<", ";
					   	continue;
					   }
					   nextterm=t1+t2;
					   t1=t2;
					   t2=nextterm;
					   cout<<nextterm<<", ";
				    
			}
		}

};
main(){
	fibo F;
	F.inputdata();
	F.displayoutput();
}
