#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    int dp[s.size() + 1][s.size() + 1];
    for(int i = 0; i < s.size(); ++i) dp[i][i] = 1;
    int res = 1;
    for(int i = s.size() - 2; i >= 0; --i){
        for(int j = i + 1; j < s.size(); ++j){
            if(s[i] != s[j]) dp[i][j] = 0;
            else dp[i][j] = (dp[i + 1][j - 1] == j - i - 1) * (dp[i + 1][j - 1] + 2);
            res = max(res, dp[i][j]);
        }
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}