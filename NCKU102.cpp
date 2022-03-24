#include"bits/stdc++.h"
using namespace std;
int divider = 1000000007;
void solve();
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
void solve(){
    int n;
    cin>> n;
    vector<array<int, 2>> dp(max(2,n));
    dp[0][0] = (2);
    dp[0][1] = (7);
    dp[1][0] = (1);
    dp[1][1] = (3);
    for(int i=2; i<n; i++){
        int temp = 0;
        temp = (temp + dp[0][i-2]) % divider;
        temp = (temp + dp[0][i-1]) % divider;
        temp = (temp + dp[0][i-1]) % divider;
        temp = (temp + dp[1][i-1]) % divider;
        temp = (temp + dp[1][i-1]) % divider;
        dp[0][i] = (temp % divider);
        dp[1][i] = ((dp[0][i-1] + dp[1][i-1])%divider);
    }
    cout << dp[0][n-1] ;
}