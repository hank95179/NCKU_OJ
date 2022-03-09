#include<iostream>
using namespace std;
int main(){
	int N = 0;
	cin >> N;
	int p = 0, m = 0;
	char temp;
	for (int i=0;i<N;i++){
		cin >> temp;
		if(temp == '+'){
			p++;
		}
		else{
			p--;
			if(p < 0) p = 0;
		}
	}
	cout << p ;
}
