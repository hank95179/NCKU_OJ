#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int devide = 1e9+7;

    int n,m,p[1500][30];
    cin >>n >>m;
    for (int i=0; i<n; i++){
        p[i][0] = i+1;
    }
    for (int i=0; i<m; i++){
        p[0][i] = 1;
    }
    for(int i = 1;i<m;i++){
        for(int j = 1;j<n;j++){
            long long temp =0;
            for(int k = 0;k<=j;k++){
                temp += p[k][i-1] % devide;
            }
            p[j][i] = temp %devide;
        }
    }
    cout << p[n-1][m-1];
}