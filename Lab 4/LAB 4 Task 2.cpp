#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age:";
	cin>>age;
	string category=(age<13)? " child":((age>=13) && (age<=19))?" Teenager" :" Adult";
	cout<<"age " << age << " falls under the catergory :" << category <<endl;
	return(0);
}