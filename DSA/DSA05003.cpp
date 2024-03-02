#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, p;
    cin >> n >> m >> p;
    string a, b, c;
    cin >> a >> b >> c;
    a = '.' + a;
    b = '*' + b;
    c = '-' + c;
    int dp[n + 1][m + 1][p + 1] = {};
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            for(int k = 1; k <= p; ++k){
                if(a[i] == b[j] && b[j] == c[k]) dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                else dp[i][j][k] = max({dp[i - 1][j - 1][k], dp[i - 1][j][k - 1], dp[i - 1][j][k], 
                                        dp[i][j - 1][k - 1], dp[i][j - 1][k], dp[i][j][k - 1]});
            }
        }
    }
    cout << dp[n][m][p] << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}