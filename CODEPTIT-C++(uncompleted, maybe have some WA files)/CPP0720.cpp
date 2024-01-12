#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], dp1[n] = {}, dp2[n] = {};
		for(int &x : a) cin >> x;
		for(int i=0; i<n; ++i){
			dp1[i] = 1;
			for(int j=0; j<i; ++j){
				if(a[j] < a[i]) dp1[i] = max(dp1[i], dp1[j] + 1);
			}
		}
		for(int i=n-1; i>=0; --i){
			dp2[i] = 1;
			for(int j=n-1; j>i; --j){
				if(a[j] < a[i]) dp2[i] = max(dp2[i], dp2[j] + 1);
			}
		}
		int res = 0;
		for(int i=0; i<n; ++i) res = max(res, dp1[i] + dp2[i] - 1);
		cout << res << '\n';
	}
}