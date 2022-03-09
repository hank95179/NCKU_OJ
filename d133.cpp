#include <iostream>
using namespace std;

int main() {
	long long a[30001] = {0}, n, i, f[5] = {1, 5, 10, 25, 50}, j;
    a[0] = 1;
	for(i = 0; i < 5; i++){
		for(j = f[i]; j < 30001; j++){
            a[j] += a[j-f[i]];
		}
	}
	while(cin >> n){
		if(a[n] == 1)
			printf("There is only 1 way to produce %lld cents change.\n", n);
		else
			printf("There are %lld ways to produce %lld cents change.\n", a[n], n);
	}
}
