#include<iostream>
using namespace std;
int main(){
	int x1=3,y1=4;
	int x2=6,y2=8;
	int squared_distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	cout<<"The squared_distance between the points("<<x1<<","<<y1<<")and("<<x2<<","<<y2<<")is:"<<squared_distance;
	return(0);
}
