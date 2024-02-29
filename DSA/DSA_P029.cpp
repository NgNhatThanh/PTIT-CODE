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
    int dp[(1 << n) + 1] = {};
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < (1 << n); ++j){
            if(!(j & (1 << i))) continue;
            int cnt = 0;
            for(int k = 0; k < n; ++k) cnt += j & (1 << k);
            for(int k = 0; k < n; ++k){
                if(k != i && j & (1 << k)) dp[j] = min(dp[j], dp[j ^ (1 << k)] + a[cnt][k]);
            }
        }
    }
    cout << dp[(1 << n) - 1] << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}