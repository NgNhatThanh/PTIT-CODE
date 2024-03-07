#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j) cin >> a[i][j];
    }
    int dp[n][m], res = INT_MAX;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(!i && !j) dp[i][j] = a[i][j];
            else{
                dp[i][j] = INT_MAX;
                if(i) dp[i][j] = min(dp[i - 1][j] + a[i][j], dp[i][j]);
                if(j) dp[i][j] = min(dp[i][j - 1] + a[i][j], dp[i][j]);
                if(i && j) dp[i][j] = min(dp[i - 1][j - 1] + a[i][j], dp[i][j]);
            }
        }
    }
    cout << dp[n - 1][m - 1] << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}