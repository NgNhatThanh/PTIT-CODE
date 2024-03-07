#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n][m], dp[n][m], res = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            if(a[i][j]){
                dp[i][j] = 1;
                if(i > 0 && j > 0) dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
            }
            else dp[i][j] = 0;
            res = max(res, dp[i][j]);
        }
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