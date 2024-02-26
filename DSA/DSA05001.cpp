#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;
    int dp[a.size() + 1][b.size() + 1] = {};
    a = '.' + a; b = '+' + b;
    for(int i = 1; i < a.size(); ++i){
        for(int j = 1; j < b.size(); ++j){
            if(a[i] == b[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[a.size() - 1][b.size() - 1] << '\n';
}

int main(){ 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}