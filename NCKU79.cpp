#include <iostream>
using namespace std;

int main() {
    char c[3];
    int count = false;
    for (int i = 0; i < 3; i++) {
        cin >> c[i];
        if(c[i] == '+') count++ ;
        
    }
    if(count % 2 == 1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}