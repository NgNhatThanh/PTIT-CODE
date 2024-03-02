#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    int dp[1 << n][n] = {};
    for(int i = 0; i < (1 << n); ++i){
        for(int j = 0; j < n; ++j) dp[i][j] = INT_MAX;
    }
    for(int i = 0; i < n; ++i) dp[1 << i][i] = 0;
    for(int i = 1; i < (1 << n); ++i){
        for(int j = 0; j < n; ++j){
            if(i & (1 << j)){
                for(int k = 0; k < n; ++k){
                    if(k != j && i & (1 << k)) dp[i][j] = min(dp[i][j], dp[i ^ (1 << j)][k] + a[k][j]);
                }
            }
        }
    }
    int res = *min_element(dp[(1 << n) - 1], dp[(1 << n) - 1] + n);
    cout << res << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}