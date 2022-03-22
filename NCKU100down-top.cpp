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
    vector<long long> dp;
    dp.push_back(1);
    dp.push_back(2);
    for(int i=2; i<n;i++){
        dp.push_back((dp[i-1]+dp[i-2])%divider);
    }
    printf("%d\n",dp[n-1]);
}
