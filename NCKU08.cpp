#include <iostream>
using namespace std;

int main() {
    int day = 0;
    int limit = 0;
	cin>>day>>limit;
    int P[day];
    for(int i=0;i<day;i++) {
        cin>>P[i];
    }
    cout<<day<<" "<<limit<<endl;
    // for(int i=0;i<day;i++) {
    //     cout<<P[i]<<endl;
    // }
}