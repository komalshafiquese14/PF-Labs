#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	char op;
	cout<<"Enter two numbers:";
	cin>>num1>>num2;
	cout<<"Enter operator(+,-,*,/): " ;
	cin>>op;
	switch(op)
	{
	case'+':
		cout<<"Result ="<<num1+num2;
		break;
	case'-':
		cout<<"Result ="<<num1-num2;
		break;
	case'*'	:
		cout<<"Result ="<<num1*num2;
		break;
		
	case'/'	:
		if(num2!=0)
		cout<<"Result ="<<num1/num2;
		else
		cout<<"Devision by zero is not allowed";
		break;
		dafault:
			cout<<"invalid operator";
		}
		return(0);	
}
