#include<iostream>
using namespace std;
void sum(int x,char op,int y)
{
int sum;
sum=x+y;
cout<<"the sum of nums is : "<<sum<<endl;
}
void sub(int x,char op,int y)
{
int sub;
sub=x-y;
cout<<"the sub of nums is : "<<sub<<endl;
}
void mul(int x,char op,int y)
{
int mul;
mul=x*y;
cout<<"the mul of nums is : "<<mul<<endl;
}
void div(int x,char op,int y)
{
int div;
div=x/y;
cout<<"the div of nums is : "<<div<<endl;
}
int main(){
	int select;
	cout<<"--main menu--"<<endl;
	cout<<"press 1 for sum"<<endl;
	cout<<"press 2 for sub"<<endl;
	cout<<"press 3 for mul"<<endl;
	cout<<"press 4 for div"<<endl;
	cin>>select;
	int a,b;
	char op;
	cout<<"enter 1st num : ";
	cin>>a;
	cout<<"enter 2nd num : ";
	cin>>b;
	if(select == 1)
	{
		sum(a, '+', b);
	}
    else if(select == 2)
	{
		sub(a, '-', b);
	}
	else if(select == 3)
	{
		mul(a, '*', b);
	}
	else if(select == 4)
	{
		div(a, '/', b);
	}
}

