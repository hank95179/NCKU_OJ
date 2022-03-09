#include<iostream>
#include <stdio.h>
#include<algorithm>
#include <vector>
using namespace std;
struct skill{
	int s, d;
	bool operator<(const skill &a)const{
		return s < a.s;
	}
} a[1000000];

int main(){
	freopen("test.txt","r",stdin);
	int x;
	cin>>x;
	while(x > 0){
		int want,least,small_s = 0,small_t = 0,small,del = 0;
		cin>>want>>least;
		vector<int> str,dex;
		for(int i = 0; i < want;i++){
			int s,t;
			cin>>a[i].s>>a[i].d;		
		}
		sort(a,a+want);
		for(int i = 0; i < want;i++){
			cout<<a[i].s<<" "<<a[i].d<<endl;
		}
		x--;
	}
}