#include <iostream>
#include <vector>
#include <array>
using namespace std;

int mod = 1000000007;

int main(void) {
    int n;
    cin >> n;
    
    vector<array<int, 2>> dp(max(3, n + 1));
    dp[0][0] = 2;
    dp[0][1] = 1;
    dp[1][0] = 7;
    dp[1][1] = 3;
    for (int i = 2; i < n; ++i) {
        dp[i][0] = dp[i - 1][0];
        dp[i][0] = (dp[i][0] + dp[i - 1][0]) % mod;
        dp[i][0] = (dp[i][0] + dp[i - 1][1]) % mod;
        dp[i][0] = (dp[i][0] + dp[i - 1][1]) % mod;
        dp[i][0] = (dp[i][0] + dp[i - 2][0]) % mod;
        
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
    }
    
    cout << dp[n-1][0] << '\n';
    
    return 0;
}