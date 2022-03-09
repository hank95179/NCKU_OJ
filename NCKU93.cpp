#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string input;
    cin >> input;
    int ans = 0;
    for(int i = 1;i<n-1;i++){
        // cout << input[i] ;
        int count = 0,j = 1;
        while(((i-j)>=0) && (i+j) < n){
            if(input[i-j] == 'A' && input[i+j] == 'T'){
                count++;
            }
            if(input[i-j] == 'T' && input[i+j] == 'A'){
                count++;
            }
            if(input[i-j] == 'C' && input[i+j] == 'G'){
                count++;
            }
            if(input[i-j] == 'G' && input[i+j] == 'C'){
                count++;
            }
            j++;
        }
        if(count > ans){
            ans = count;
        }
        // cout<<ans<<endl;
    }
    for(int i = 1;i<n-2;i++){
        // cout << input[i] ;
        int count = 0,j = 1;
        while(((i-j)>=0) && (i+j+1) < n){
            if(input[i-j] == 'A' && input[i+j+1] == 'T'){
                count++;
            }
            if(input[i-j] == 'T' && input[i+j+1] == 'A'){
                count++;
            }
            if(input[i-j] == 'C' && input[i+j+1] == 'G'){
                count++;
            }
            if(input[i-j] == 'G' && input[i+j+1] == 'C'){
                count++;
            }
            j++;
        }
        if(count > ans){
            ans = count;
        }
    }
    cout<<ans<<endl;
}