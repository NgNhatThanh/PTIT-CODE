#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll dp[n];
    dp[0] = a[0];
    dp[1] = max(a[1], a[0]);
    for(int i = 2; i < n; ++i) dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    cout << dp[n - 1] << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}