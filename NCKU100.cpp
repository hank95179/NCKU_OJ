#include"bits/stdc++.h"
using namespace std;
map<string, multiset<string> >M;
long long divider = 1000000007;
void solve();
int dp(int j);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
void solve(){
    int n = 0;
    cin >> n;
    long long ans=0;
    ans = dp(n);
    printf("%d\n",ans%divider);
}
int dp(int j){
    if (j < 3){
        return j;
    }
    else return dp(j-1) + dp(j-2) % divider;
}