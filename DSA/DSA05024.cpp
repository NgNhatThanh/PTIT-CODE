#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    int dp[k + 1] = {};
    dp[0] = 1;
    for(int i = 1; i <= k; ++i){
        for(int x : a){
            if(i >= x) (dp[i] += dp[i - x]) %= mod;
        }
    }
    cout << dp[k] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}