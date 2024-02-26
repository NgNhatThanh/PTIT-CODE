#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll dp[n + 1] = {};
    dp[0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = max(0, i - 3); j < i; ++j) dp[i] += dp[j];    
    }
    cout << dp[n] << '\n';
}

int main(){ 
    int t;
    cin >> t;
    while(t--){
        solve();        
    }
}