#include<iostream>
using namespace std;
int x = 4;
int main(){
	int x= 2;
	cout<<x;//local
	cout<<::x;//global
}
