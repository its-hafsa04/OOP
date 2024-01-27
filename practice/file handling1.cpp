#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[5];
	//create and write file
	ofstream file("data.txt");
	cout<<"enter names of students"<<endl;
	for(int i=0;i<5;i++){
		cout<<"name of student "<<i+1<<": "<<endl;
		cin>>name;
		file<<name<<endl;
	}
	
}
