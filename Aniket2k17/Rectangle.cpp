#include <iostream>
using namespace std;
class Rectangle{
	double length, breadth;
	public:
	Rectangle(){}
	Rectangle(double length, double breadth){
		this->length = length;
		this->breadth = breadth;
	}
	double area(){
		return(length*breadth);
	}
};
int main(int argc, char const *argv[])
{
	Rectangle r1(10,20);
	Rectangle r2(15,10);
	cout<<"Area of First Rectangle object is :"<<r1.area()<<endl;
	cout<<"Area of Second Rectangle object is :"<<r2.area()<<endl;
	if(r1.area() > r2.area())
		cout<<"Area of r1 is greater than r2"<<endl;
	else
		cout<<"Area of r2 is greater than r1"<<endl;
	return 0;
}