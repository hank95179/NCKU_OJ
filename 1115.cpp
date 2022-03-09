#include<iostream>
#include<cmath>
#include<stdlib>
using namespace std;
#define pi 3.141592653589793
int main(){
	int r,y;
	cin>>r>>y;
	cout<<r<<" "<<y<<endl;
	double x = 0;
	x = acos(y/r);
	cout << x << endl;
}
