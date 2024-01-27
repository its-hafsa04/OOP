#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string text;
	
	//read    console
	ifstream outFile("data.txt");
	while(getline(outFile,text)){
		cout<<text<<endl;
	}
	outFile.close();
}
