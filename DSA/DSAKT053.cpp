#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    a = '.' + a;
    b = '*' + b;
    int dp[n + 1][m + 1] = {};
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(a[i] == b[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[n][m] << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}