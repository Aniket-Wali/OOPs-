#include <iostream>
#include <cstdlib>
using namespace std;
class Time{
	int hours, minute, seconds;
	public:
	Time(){}

	void setTime(int hours, int minute, int seconds){
		this->hours = hours;
		this->minute = minute;
		this->seconds = seconds;	
	}

	void getTime(){
		cin>>hours;
		cin>>minute;
		cin>>seconds;
	}

	bool checkTime(){
		if(hours >= 1 && hours <= 12)
			if(minute >= 0 && minute <= 59)
				if(seconds >= 0 && seconds <= 59)
					return true;
		else
			return false;
	}

	void showTime(){
		cout<<hours<<":"<<minute<<":"<<seconds<<endl;
	}

	void alterTime(int change_time){
		int temp, temp2, temp3;
		temp = seconds + change_time;
		if(temp >= 60){
			seconds = temp % 60;
			temp2 = minute + temp / 60;
			if(temp2 >= 60){
				minute = temp2 / 60;
			}
			else if(temp2 < 60)
				minute+= temp / 60;
			temp3 = hours + 1;
			if(temp3 > 12){
				hours = 1;
			}
		}
		else{
			seconds+=change_time;
		}
		cout<<"Modified time is -> ";
		showTime();
		cout<<endl;
	}
};

int main(int argc, char const *argv[])
{
	Time t1;
	int change_time_var;
	cout<<"Enter time in hr : min : sec format"<<endl;
	t1.getTime();
	if(t1.checkTime())
		t1.showTime();
	else{
		cout<<"!!!Error in date"<<endl;
		exit(0);
	}
	cout<<"Enter the seconds to be add in previous time"<<endl;
	cin>>change_time_var;
	t1.alterTime(change_time_var);
	return 0;
}