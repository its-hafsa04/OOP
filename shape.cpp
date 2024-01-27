#include<iostream>
using namespace std;
class shape{
	public:
		void draw(int x){
			cout<<"draw any shape."<<endl;
		}
		void draw(double x){
			cout<<"draw a circle shape."<<endl;
		}
		void draw(int x,int y){
			cout<<"draw a triangle shape."<<endl;
		}
		void setColor(){
			cout<<"choose any color"<<endl;
		}
};
class circle: public shape{
	public:
		void radius(int x){
			cout<<"the radius of a cicle is"<<x<<endl;
		}
		void radius(double x){
			cout<<"the radius of cicle is d/2"<<x<<endl;
		}
		void radius(int x,int y){
			cout<<"function overloaded values are"<<x<<" "<<y<<endl;
		}		
		void diameter(){
			cout<<"find the diameter of a cicle"<<endl;
		}
};
class triangle: public shape{
	public:
		void height(int x){
			cout<<"height of triangle is "<<x<<endl;
		}
		void height(double x){
			cout<<"height of triangle is "<<x<<endl;
		}
		void height(int x,int y){
			cout<<"height of triangle is x,y as "<<x<<" "<<y<<endl;
		}
		void base(){
			cout<<"triangle has a base"<<endl;
		}
};
main(){
	circle c;
	c.radius(23);
	c.radius(54,47);
	c.diameter();
	triangle t;
	t.height(3,4);
	t.height(32);
	t.height(42);
	t.height(5,3);
}

