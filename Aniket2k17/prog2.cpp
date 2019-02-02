#include <iostream>
using namespace std;
struct student
{
	char name[20];
	int roll_number, age;
	float cpi;
};
int main(int argc, char const *argv[])
{
	int x, y, z;
	struct student st[5];
	cout<<"Enter the name, roll number, age and CPI"<<endl;
	for (int i = 0; i < 5; i++)
	{
		cin>>st[i].name;
		cin>>st[i].roll_number;
		cin>>st[i].age;
		cin>>st[i].cpi;
	}
	int min = st[1].age;
	float max_cpi = st[1].cpi;
	float min_cpi = st[1].cpi;
	for (int i = 0; i < 5; i++)
	{
		if(st[i].age < min){
			min = st[i].age;
			x = i;
		}
		if(st[i].cpi < min_cpi){
			min_cpi = st[i].cpi;
			y = i;
		}
		if(st[i].cpi > max_cpi){
			max_cpi = st[i].cpi;
			z = i;
		}
	}
	cout<<st[z].name<<" got highest CPI"<<endl;
	cout<<st[y].name<<" got lowest CPI"<<endl;
	cout<<st[x].name<<" has minimum age"<<endl;
	return 0;
}