#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n;
    double list[n];
    for(int i = 0; i < n;i++){
        cin >> list[i];
    }
    double biggest = -1,smallest = -1,pair;
    for(int i = 0; i < n;i++){
        if (smallest == -1 && list[i] > -1){
            smallest = list[i];
            biggest = list[i];
        }
        else if(smallest > list[i] && list[i] != -1) smallest = list[i];
        else if(biggest < list[i]) biggest = list[i];
        double temp  = 0;
        if (i == n-1) continue;
        if(list[i] != -1 && list[i+1] != -1) {
            temp = fabs(list[i]-list[i+1]);
            if (temp>pair) pair = temp; 
        }
    }
    double m = (biggest-smallest)/2;
    if(pair > m) m = pair;
    cout<<m << endl;
}