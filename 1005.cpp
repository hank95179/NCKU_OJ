#include<iostream>
using namespace std;
int primenum(int a,int b){

	return 1;
}
int main(){
	int a[50],temp,i = 0;
	cin>>temp;
	double nn = 0,ans = 0;
	while(temp != 0){
		a[i] = temp;
		i++;
		cin>>temp;
	}
	nn = i*(i-1)/2;
	for(int u = 0;u < i; u++){
		for(int j = u+1; j < i;j++){
			ans += primenum(a[u],a[j]);
		}
	}
//	for(int u = 0 ; u < i; u++){
//		cout<<a[u]<<endl;
//	}
	ans /= nn;
	cout<<nn<<endl;
}
