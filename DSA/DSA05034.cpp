#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

void solve(){
    int n, k;
    cin >> n >> k;
    int dp[n + 1] = {}, sum[n + 1];
    dp[0] = 1; sum[0] = 1;
    for(int i = 1; i <= n; ++i){
        int tmp = (i - k > 0) ? sum[i - k - 1] : 0;
        (dp[i] += (sum[i - 1] - tmp + mod) % mod) %= mod;
        sum[i] = (sum[i - 1] + dp[i]) % mod;
    }
    cout << dp[n] << '\n';
}

int main(){ 
    int t = 1;
    cin >> t;
    while(t--){
        solve();        
    }
}