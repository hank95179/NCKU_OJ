#include<iostream>
#include<vector>
//#include<stdlib>
using namespace std;
const int maxn{10000};
vector<int> F(maxn + 1, 0);
vector<int> C(maxn + 1, 0);
long long Fib(int n) {
    if (F[n]) return F[n];
    if (n <= 1) return n;
    
    // memoization
    return F[n] = Fib(n - 1) + Fib(n - 2);
}
int countone(int n){
    if(C[n]) return C[n];
    if(n <= 0){
        return 0;
    }
    return C[n] = countone(n/2) + n%2;
}
int main(){
    int input = 0;
    long long x = 0;
    cin >> input;
    // for(int i = 0; i < input; i++){
    //     cout<<Fib(i)<<endl;
    // }
    cout<< countone(input)<<endl;
}
