#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    ll dp[n];
    for(int &x : a) cin >> x;
    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);
    for(int i = 2; i < n; ++i) dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    cout << dp[n - 1] << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}