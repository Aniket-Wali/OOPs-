#include <iostream>
using namespace std;

class Box{
	int length, width, height;
	public:
		Box(){}

		Box(int l, int w, int h){
			this->length = l;
			this->width = w;
			this->height = h;
		}

		Box operator + (const Box &b){
			Box box;
			box.length = this->length + b.length;
			box.width = this->width + b.width;
			box.height = this->height + b.height;
			return box;
		}

		void operator ++ (){
			this->length = this->length + 1;
			this->width = this->width + 1;
			this->height  =this->height + 1;
		}

		void showBox(){
			cout<<length<<endl;
			cout<<width<<endl;
			cout<<height<<endl;
		}
};

int main(int argc, char const *argv[])
{
	Box b1(4,5,6), b2(10,20,30) ,b3;
	b3 = b1 + b2;
	b3.showBox();
	++b1;
	++b2;
	b1.showBox();
	b2.showBox();
	return 0;
}