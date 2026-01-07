#include<iostream>
using namespace std;
int main(){
	const double item1=12.95;
	const double item2=24.95;
	const double item3=6.95;
	const double item4=14.95;
	const double item5=3.95;
	const double SalesTaxRate=0.06;
	cout<<"price of item1:$"<<item1<<endl;
	cout<<"price of item2:$"<<item2<<endl;
	cout<<"price of item3:$"<<item3<<endl;
	cout<<"price of item4:$"<<item4<<endl;
	cout<<"price of item5:$"<<item5<<endl;
	double subtotal=item1+item2+item3+item4+item5;
	cout<<"subtotal:$"<<subtotal<<endl;
	double SalesTax=subtotal*SalesTaxRate;
	cout<<"SalesTax(6%):$"<<SalesTax<<endl;
	double total=subtotal+SalesTax;
	cout<<"Total:$"<<total<<endl;
	return(0);
}