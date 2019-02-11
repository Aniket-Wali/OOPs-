#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

class LinkedList
{
	node *start;
public:
	LinkedList(){
		start = NULL;
	}
	
	void insert(int n){
		node *temp = new node;
		temp->data = n;
		temp->next = NULL;
		if(start == NULL){
			start = temp;
		}
		else{
			node *n1 = start;
			while(n1->next!=NULL){
				n1 = n1->next;
			}
			n1->next = temp;
		}
	}

	void insertAtFirst(int n){
		node *temp = new node;
		temp->data = n;
		temp->next = NULL;
		if(start == NULL){
			start = temp;
		}
		else{
			temp->next = start;
			start = temp;
		}
	}

	void insertAt_nth(int n, int p){
		node *temp = new node;
		node *temp1 = start;
		temp->data = n;
		temp->next = NULL;
		for (int i = 0; i < p; i++)
		{
			temp1 = temp1->next;
		}
		temp->next = temp1->next;
		temp1->next = temp;
	}

	void display(){
		node *temp = start;
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
	}
};

int main(int argc, char const *argv[])
{
	LinkedList l1;
	for (int i = 1; i <= 5; ++i)
	{
		l1.insert(i);
	}
	l1.insertAtFirst(10);
	l1.insertAt_nth(20,3);
	l1.display();
	return 0;
}