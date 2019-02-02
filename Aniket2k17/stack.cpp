#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class stack{
	int top, data[100];
public:
	stack(){
		top = -1;
	}

	bool isFull(){
		if(top == 99)
			return true;
		else
			return false;
	}

	bool isEmpty(){
		if(top == -1)
			return true;
		else
			return false;
	}

	void push(int val){
		if(isFull())
			cout<<"Stack is Full"<<endl;
		else
			data[++top] = val;
	}

	int pop(){
		if(isEmpty())
			cout<<"Stack is empty"<<endl;
		else
			return(data[top--]);
	}

	void printSatck(){
		int temp = top;
		while(temp>=0){
			cout<<data[temp--]<<endl;
		}
	}
};

int main(int argc, char const *argv[])
{
	stack s1;
	srand(time(NULL));
	for (int i = 0; i <= 10; i++)
	{
		s1.push(rand() % 100);
	}
	s1.printSatck();
	return 0;
}