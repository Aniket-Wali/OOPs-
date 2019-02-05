#include <iostream>
using namespace std;

class overloading{
	int arr[5];
public:
	overloading(){
		for (int i = 0; i < 5; i++)
			this->arr[i] = 5;
	}

	void display(){
		cout<<"Modifiied array : ";
		for (int i = 0; i < 5; i++)
			cout<<this->arr[i]<<"  ";
		cout<<endl;
	}

	friend overloading operator ++(overloading &x);

	friend overloading operator ++(overloading &x, int);
};

overloading operator ++(overloading &x){
	overloading c;
	for (int i = 0; i < 5; i++)
	{
		x.arr[i] = x.arr[i] + 1;
		c.arr[i] = x.arr[i];
	}
	return c;
}

overloading operator ++(overloading &x, int y){
	overloading c;
	for (int i = 0; i < 5; i++)
	{
		c.arr[i] = x.arr[i];
		x.arr[i] = x.arr[i] + 1;
	}
	return c;
}

int main(int argc, char const *argv[])
{
	overloading a1, a2 ,a3;
	++a1;
	a3 = a2++;
	a1.display();
	a2.display();
	a3.display();
	return 0;
}