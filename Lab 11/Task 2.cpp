#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the number of elements : ";
	cin >> num;
	int arr[num];
	cout << "\nEnter the elements of array : " << endl;
	for(int i=0;i<num;i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nArray elements in reverse : ";
	for(int j=num-1;j>=0;j--)
	{
		cout << arr[j] << " ";
	}
	return (0);
	
}
