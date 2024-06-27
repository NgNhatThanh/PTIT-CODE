#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    int dp[2 * n + 1];
    dp[1] = x;
    for(int i = 2; i <= 2 * n; ++i){
        dp[i] = dp[i - 1] + x;
        if(i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + z);
        dp[i - 1] = min(dp[i - 1], dp[i] + y);
    }
    cout << dp[n] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}