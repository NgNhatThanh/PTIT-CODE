#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

void solve(){
    int n, k;
    cin >> n >> k;
    int dp[n + 1] = {};
    dp[0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = max(0, i - k); j < i; ++j) (dp[i] += dp[j]) %= mod;
    }
    cout << dp[n] << '\n';
}

int main(){ 
    int t;
    cin >> t;
    while(t--){
        solve();        
    }
}