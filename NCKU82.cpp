#include<iostream>
using namespace std;
int main(){
	long long x,y,temp;
    cin>>x>>y;
    while(y != 0){
        x%=y;
        temp = x;
        x = y;
        y = temp;
    }
    cout<<x;
}
