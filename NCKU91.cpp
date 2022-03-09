#include <iostream>
using namespace std;
int main(){
	int n = 0;
	cin >> n ;
	string s;
	cin >> s ;
	long long ans = 0 ,b = 0,t = 0;;
	for (int i{0}; i < n; ++i)
        if (s[i] == 'T')
            t++;

    for (int i{0}; i < n; ++i) {
        if (s[i] == 'B'){
		 	b++;
		}
        else if (s[i] == 'T') {		
			t--;
		}
        else {
			ans += b * t;
		}
    }
	cout << ans << '\n';
	return 0;
}
