#include"bits/stdc++.h"
using namespace std;
map<string, multiset<string> >M;
void solve();
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
void solve(){
    int m;
    cin >> m;
    while(m--){
        string str,A,B;
        cin >> str;
        if(str[0] =='I'){
            cin >> A >> B;
            M[A].insert(B);
        }
        else{
            cin >> A;
            if(M[A].size() == 0){
                cout <<"CALL THE POLICE\n";
            }
            else{
                cout << A ;
                for(auto it: M[A]) cout << " " << it;
				cout << endl;
				M[A].clear();
            }
        }
    }
}