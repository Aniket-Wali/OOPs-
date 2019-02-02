#include <iostream>
using namespace std;

class player{
	long int unique_no;
	char name[20], team_name[15];
	int not_out, runs, wickets, innings_played;
public:
	player(){}

	void team_info(){
		cin>>unique_no;
		cin>>name;
		cin>>team_name;
		cin>>not_out;
		cin>>runs>>wickets>>innings_played;
	}

	float battng_avg(){
		return ((runs / innings_played) - not_out);
	}

	friend void show_team(player x1[], player x2[]);

	friend void better_bowler(player x1[], player x2[]);

	friend void better_batsman(player x1[], player x2[]);

};

void show_team(player x1[], player x2[]){
	for (int i = 0; i < 5; i++)
	{
		cout<<x1[i].unique_no<<"\t"<<x1[i].name<<"\t"<<x1[i].team_name<<"\t"<<x1[i].not_out<<"\t"<<x1[i].runs<<"\t"<<x1[i].wickets<<"\t"<<x1[i].innings_played<<endl;
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout<<x2[i].unique_no<<"\t"<<x2[i].name<<"\t"<<x2[i].team_name<<"\t"<<x2[i].not_out<<"\t"<<x2[i].runs<<"\t"<<x2[i].wickets<<"\t"<<x2[i].innings_played<<endl;
	}
		
	}

void better_batsman(player x1[], player x2[]){
	float max_batting_avg1 = x1[0].battng_avg();
	float max_batting_avg2 = x2[0].battng_avg();
	int a, b;
	for (int i = 0; i < 5; i++)
	{
		if(x1[i].battng_avg() > max_batting_avg1){
			max_batting_avg1 = x1[i].battng_avg();
			a = i;
		}

		if(x2[i].battng_avg() > max_batting_avg2){
			max_batting_avg2 = x2[i].battng_avg();
			b = i;
		}
	}
	cout<<"Better batsman of team "<<x1[a].team_name<<" : "<<x1[a].name<<endl;
	cout<<"Better batsman of team "<<x2[b].team_name<<" : "<<x2[b].name<<endl;
}

void better_bowler(player x1[], player x2[]){
	int max_wicket1 = x1[0].wickets;
	int max_wicket2 = x2[0].wickets;
	int a, b;
	for (int i = 0; i < 5; i++)
	{
		if(x1[i].wickets > max_wicket1){
			max_wicket1 = x1[i].wickets;
			a = i;
		}
		if(x2[i].wickets > max_wicket2){
			max_wicket2 = x2[i].wickets;
			b = i;
		}
	}
	cout<<"Better bowler of team "<<x1[a].team_name<<" : "<<x1[a].name<<endl;
	cout<<"Better bowler of team "<<x2[b].team_name<<" : "<<x2[b].name<<endl<<b<<endl;
}

int main(int argc, char const *argv[])
{
	player P1[5], P2[5];
	for (int i = 0; i < 5; i++)
		P1[i].team_info();
	for (int i = 0; i < 5; i++)
		P2[i].team_info();

	cout<<"UNIQUE no\t NAME\t TEAM NAME\t NOT OUT\t RUNS\t WICKETS\t INNINGS PLAYED"<<endl;
	show_team(P1, P2);
	better_batsman(P1, P2);
	better_bowler(P1, P2);
	return 0;
}