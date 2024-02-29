#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n, v;
    cin >> n >> v;
    int a[n], c[n];
    for(int &x : a) cin >> x;
    for(int &x : c) cin >> x;
    int dp[n + 1][v + 1] = {};
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= v; ++j){
            dp[i][j] = dp[i - 1][j];
            if(j - a[i - 1] >= 0) dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i - 1]] + c[i - 1]);
        }
    }
    cout << dp[n][v] << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}