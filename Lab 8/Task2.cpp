#include<iostream>
using namespace std;
int main()
{
	int choice;
	float radius, lenght, width, base, height;
	cout<<"Select Shape:\n";
	cout<<"1.Circle\n2.Rectangle\n3.Triangle\n"	;
	cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"Enter radius";
		cin>>radius;
		cout<<"Area of Circle ="<<3.14*radius*radius;
		break;
	case 2:
		cout<<"Enter lenght and height";
		cin>>lenght>>width;
		cout<<"area of Rectangle = "<<lenght*width;
		break;
		
	case 3:
		cout<<"Enter base and height";
		cin>>base>>height;
		cout<<"Area of Triangle ="<<0.5*base*height;
		break;
	default:
		cout<<"Invalid choice";
		
	}
	return(0);
}
