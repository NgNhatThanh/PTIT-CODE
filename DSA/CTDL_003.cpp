#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, W;

void solve(){
    cin >> n >> W;
    int a[n], c[n];
    for(int i = 1; i<= n; ++i) cin >> c[i];
    for(int i = 1; i<= n; ++i) cin >> a[i]; 
    
    int dp[n + 1][W + 1] = {};
    for(int i = 1; i <= n; ++i){
        for(int j = 0; j <= W; ++j){
            dp[i][j] = dp[i - 1][j];
            if(j - a[i] >= 0) dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + c[i]);
        }
    }
    cout << dp[n][W] << '\n';
    for(int i = 1; i <= n; ++i){
        if(dp[i][W] == dp[i - 1][W]) cout << 0 << ' ';
        else{
            cout << 1 << ' ';
            W -= a[i];
        }
    }
}

int main(){
    faster()
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}