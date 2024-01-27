// factorial of a positive integer
#include<iostream>
using namespace std;
class call{
	   private:
	   	int x;
	   	int fac=1;
	   	public:
	   		void inputdata(){
	   			cout<<"enter the number:";
	   			cin>>x;
			   }
			   void displayfac(){
			   	if(x<0){
			   		cout<<"enter invalid variable:"<<endl;
				   }
			   	
			   	else{
				   
			   	    for(int y=1;y<=x;y++){
			   	    	fac=fac*y;
					   }
					   cout<<"factorial of a nummber:"<<fac<<endl;
			   	
			   }
		}
};
main(){
	call S;
	S.inputdata();
	S.displayfac();
}






