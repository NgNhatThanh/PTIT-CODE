#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int dp[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        dp[i] = a[i];
        for(int j = 0; j < i; ++j){
            if(a[j] < a[i]) dp[i] = max(dp[i], dp[j] + a[i]);
        }
    }
    cout << *max_element(dp, dp + n) << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}