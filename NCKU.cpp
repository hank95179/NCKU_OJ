#include<iostream>
using namespace std;
int main(){
	int ans[100] = {0};
	int N = 0;
	cin >> N;
	int temp = 0;
	for (int i=0;i<N;i++){
		cin >> temp;
		ans[--temp] += 1;
	}
	for (int i=0;i<100; i++){
		cout << ans[i] <<" ";
	}
}
