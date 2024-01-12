#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int dp[n+2];
        int res = 0;
        for(int i=0; i<n; ++i){
            dp[i] = 1;
            for(int j=0; j<i; ++j){
                if(a[j] < a[i] && dp[i] < dp[j] + 1) dp[i] = dp[j] + 1;
            }
            res = max(res, dp[i]);
        }
        cout << res << '\n';
    }
}
