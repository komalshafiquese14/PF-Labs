#include<iostream> 
using namespace std;
int main(){
	float balance;
	int loyal;
	cout<<"Enter account balance:";
	cin>>balance;
	cout << "Are you alloyal customer?(1 for yes, 0 for No):";
	cin>>loyal;
	string account_type=(balance<100)?"Low balance account":(balance<=500)?"Standard account":"Premium account";
	string offerstatus=((balance>200)&&( loyal==1))? "Eligible for special offer":"Not eligible for special offer";
	cout<<"account_type;"<<account_type<<endl;
	cout<<" special offer;"<<offerstatus<<endl;
		return(0);
				}
	
