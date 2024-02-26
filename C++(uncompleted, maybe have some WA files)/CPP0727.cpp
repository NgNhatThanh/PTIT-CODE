#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        ll dp[n+2] = {};
        ll res = 0;
        for(int i=0; i<n; ++i){
            cin >> a[i];
            if(i > 1){
                dp[i] = max(dp[i-2] + a[i], dp[i-1]);
                if(i > 2) dp[i] = max(dp[i], dp[i-3] + a[i]);
            }
            else{
                dp[i] = a[i];
            }
            res = max(res, dp[i]);
        }
        cout << res << '\n';
    }
}
