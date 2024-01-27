// reverse the string 
#include<iostream>
#include<string.h>
using namespace std;
class hello{
	private:
		string inputstring;
		string reversestring;
		public:
			void inputdata(){
				cout<<"enter the string name to reverse its order:";
				getline(cin,inputstring);
			}
			void displayoutput(){
				for(int i=inputstring.length()-1;i>=0;i--){
					reversestring=reversestring+inputstring[i];
				}
				cout<<"the reverse order of the string:"<<reversestring<<endl;
				
			}
};
main(){
	hello H;
	H.inputdata();
	H.displayoutput();
}
