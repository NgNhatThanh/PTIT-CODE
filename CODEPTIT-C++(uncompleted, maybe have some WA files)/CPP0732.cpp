#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		ll dp[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
			dp[i] = a[i];
			for(int j=0; j<i; ++j){
				if(a[j] < a[i]) dp[i] = max(dp[i], dp[j] + a[i]);
			}
		}
		ll res = *max_element(dp, dp+n);
		cout << res << '\n';    
	}
}