#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int list [n];
    for(int i=0;i<n;i++){
        cin >> list[i];
    }
    int t[n+1][n+1] = {0} ;
    for(int i=1;i<n+1;i++){
        t[i][i] = list[i-1];
        t[0][i] = list[i-1];
    }
    int cnt = 0;
    for(int i=1;i<n+1;i++){
        for(int j=i; j<n+1;j++){
            t[i][j] = t[i][j-1]+t[0][j];
            if(t[i][j] < 0) cnt++;
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0; j<n+1;j++){
            // long long sum = 0;
            cout << t[i][j] << "\t" ;
            
        }
        cout << endl;
    }
    cout << cnt;
}