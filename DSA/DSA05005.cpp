#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n], dp[n] = {};
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        dp[i] = 1;
        for(int j = 0; j < i; ++j){
            if(a[j] <= a[i]) dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << n - *max_element(dp, dp + n) << '\n';
}

int main(){ 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}