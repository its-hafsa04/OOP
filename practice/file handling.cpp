#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
string st = "hafsa sajid";
//opening file using constructor and read mode
ofstream out("sample1.txt");//write operation
out<<st;
cout<<st;

return 0;
}
