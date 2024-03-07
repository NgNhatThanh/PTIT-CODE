#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    double a[n], b[n];
    for(int i = 0; i < n; ++i) cin >> a[i] >> b[i];
    int dp[n], res = 0;
    for(int i = 0; i < n; ++i){
        dp[i] = 1;
        for(int j = 0; j < i; ++j){
            if(a[j] < a[i] && b[j] > b[i]) dp[i] = max(dp[i], dp[j] + 1);
        }
        res = max(res, dp[i]); 
    }
    cout << res << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}