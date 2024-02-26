#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, s;
    cin >> n >> s;
    int a[n], dp[s + 1] = {};
    dp[0] = 1;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        for(int j = s; j >= a[i]; --j) dp[j] = max(dp[j], dp[j - a[i]]); 
    }
    (dp[s]) ? cout << "YES\n" : cout << "NO\n";
}

int main(){ 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}