#include<iostream>
using namespace std;
int main()
{
	int num=10;
	int*ptr=&num;
	//dereferencing pointer to get value of num
	cout<<"value of num:"<<*ptr<<endl;
	return(0);
	
}
