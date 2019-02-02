#include <iostream>
using namespace std;

class list{
	int data;
	list *next;
public:
	list(){
		next = new list;
		next = NULL;
	}

	bool isEmpty(){
		if(next == NULL)
			return true;
		else
			false;
	}

	void insert(int val){
		list *temp = new list;
		temp->data = val;
	}

	int del(){}


};

int main(int argc, char const *argv[])
{
	list *start;
	return 0;
}