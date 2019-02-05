#include <iostream>
using namespace std;

class overload{
	int arr[5];
public:
	overload(){
		for (int i = 0; i < 5; i++)
			this->arr[i] = 5;
	}

	overload operator ++(){		//prefix overloading
		overload c;
		for (int i = 0; i < 5; i++)
		{
			this->arr[i] = this->arr[i] + 1;
			c.arr[i] = this->arr[i];
		}
		return c;
	}

	overload operator ++(int){		//postfix overloading
		overload c;
		for (int i = 0; i < 5; i++)
		{
			c.arr[i] = this->arr[i];
			this->arr[i] = this->arr[i] + 1;
		}
		return c;
	}

	overload operator +(const overload & a){	// addition overloading
		overload s;
		for (int i = 0; i < 5; i++)
			s.arr[i] = this->arr[i] + a.arr[i];
		return s;
	}

	overload operator -(){	// negation overloading
		overload c;
		for (int i = 0; i < 5; i++){
			this->arr[i] = this->arr[i] - 2*this->arr[i];
			c.arr[i] = this->arr[i];
		}
		return c;
	}

	void display(){
		cout<<"Modifiied array : ";
		for (int i = 0; i < 5; i++)
			cout<<this->arr[i]<<"  ";
		cout<<endl;
	}
};

int main(int argc, char const *argv[])
{
	overload a1, a2, a3;
	++a1;
	a3 = a2++;
	overload a4 = a2 + a3;
	-a4;
	a1.display();
	a2.display();
	a3.display();
	a4.display();
	return 0;
}