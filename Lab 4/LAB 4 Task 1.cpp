#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"enter an integer";
	cin>>x;
	string result=(x%2==0)?"Even ":"Odd ";
	cout<<"The number "<<x <<"is "<<result<<endl;
	return(0);
	
}
