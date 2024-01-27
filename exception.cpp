#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	try{
		
	int a;
	cout<<"enter a num : "<<endl;
	cin>>a;
		if(a<0){
			cout<<"negative num"<<endl;
			throw"negative num";
			
		}
		if(a==0){
			cout<<"invalid"<<endl;
			throw a;
			
		}

int sq = sqrt(a);
cout<<a<<" is square of "<<sq<<endl;

}
	 catch(...){
	 
		 	cout<<"error!!"<<endl;
}
}
