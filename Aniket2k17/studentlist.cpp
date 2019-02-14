#include <iostream>
#include <cstdio>
using namespace std;

struct student{
	int rollno;
	char name[20];
	student *next;
};

class linkedlist
{
	student *start;
public:

	linkedlist(){
		start = NULL;
	}

	~linkedlist(){
		delete(start);
	}

	void insert(student *s){
		if(start == NULL){
			start = s;
			s->next = NULL;
		}
		else{
			student *temp = start;
			while(temp->next !=NULL){
				temp = temp->next;
			}
			temp->next = s;
			s->next = NULL;
		}
	}

	void insertAtFirst(student *s){
		student *temp = start;
		if(start == NULL){
			start = s;
			s->next = NULL;
		}
		else{
			
		}
	}

	void delete_first(){
		student *temp = start;
		start = start->next;
		temp->next = NULL;
		delete(temp);
		cout<<"First record deleted"<<endl;
	}

	void display(){
		student *temp = start;
		while(temp != NULL){
			cout<<temp->rollno<<"\t"<<temp->name<<endl;
			temp = temp->next;
		}
	}
};

int main(int argc, char const *argv[])
{
	linkedlist l1;
	student *s1[3];
	for (int i = 0; i < 3; i++)
	{
		s1[i] = new student;
		cin>>s1[i]->rollno;
		cin>>s1[i]->name;
		l1.insert(s1[i]);
	}
	l1.display();
	l1.delete_first();
	l1.display();
	return 0;
}