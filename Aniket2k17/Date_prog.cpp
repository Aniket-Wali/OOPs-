#include <iostream>
using namespace std;
class Date{
	int dd, mm, yy;
	public:
	void getDate(){
		cin>>mm;
		cin>>dd;
		cin>>yy;	
	}
	void printDate(){
		cout<<mm<<"/"<<dd<<"/"<<yy<<endl;
	}
	bool checkDate(){
		if(mm == 2 ){
			if(dd >28 || dd <1)
				return false;
		}
		if(mm > 12 || mm < 1 || dd > 31 || dd < 1)
			return false;
		else
			return true;
	}
	void modifyDate(){
		if(yy >= 0 && yy <=49){
			yy+=2000;
			printDate();
		}
		else if(yy >= 50 && yy <= 99){
			yy+=1900;
			printDate();
		}
	}
};
int main(int argc, char const *argv[])
{
	int choice;
	do{
		cout<<"1) Enter Date in mm/dd/yy format "<<endl;
		cout<<"2) Quit "<<endl;
		cin>>choice;
		if(choice == 1){
			Date date;
			date.getDate();
			if(date.checkDate()){
				date.modifyDate();
			}
			else
				cout<<"!!!!! Error in date "<<endl;
		}
		cout<<endl;
	}while(choice!=2);
	return 0;
}