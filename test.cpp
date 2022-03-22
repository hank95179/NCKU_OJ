#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define add insert
#define Int long long
#define pi acosl(-1)
#define MEM(x) memset(x,0,sizeof(x))
#define x first
#define y second
using namespace std;

struct BIT {
	vector<Int> A;
	int n;
	BIT(int _n) {
		n=_n;
		A.resize(n+1);
	}

	int lowbit(int idx) {
		return (idx&(-idx));
	}

	void update(int idx, Int v) {
		for(int i = idx+1; i <= n; i += lowbit(i)) A[i] += v;
	}

	Int query(int idx)
	{
		Int res = 0;
		for(int i = idx+1; i; i -= lowbit(i)) res += A[i];
		return res;
	}
};


void solve(){
	int n; cin >> n;
	vector<Int> A(n), B{0}, Buni;
	for(auto& it: A) cin >> it;
	for(auto it: A) B.pb(B.back() + it);
	Buni = B;
	sort(Buni.begin(), Buni.end());
	Buni.erase(unique(Buni.begin(), Buni.end()), Buni.end());


	//BIT
	BIT T1(Buni.size());
	Int ans = 0;
	for(int i = 0; i < B.size(); i++) {
		int idx = lower_bound(Buni.begin(), Buni.end(), B[i]) - Buni.begin();
		Int cnt = i - T1.query(idx);
		ans += cnt;
		T1.update(idx, 1LL);
	}
	cout << ans << endl;


}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int t=1;
	//cin >> t;
	while(t--) solve();
	return 0;
}