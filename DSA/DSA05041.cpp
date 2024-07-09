#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int dp[n + 1][n + 1];
    for(int i = 0; i < n; ++i) dp[i][i] = 1;
    for(int i = n - 2; i >= 0; --i){
        for(int j = i + 1; j < n; ++j){
            if(s[i] != s[j]) dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
            else{
                dp[i][j] = 2;
                if(i + 1 <= j - 1) dp[i][j] += dp[i + 1][j - 1];
            }
        }
    }
    cout << n - dp[0][n - 1] << '\n';
}

int main(){ 
    int t = 1;
    cin >> t;
    while(t--){
        solve();        
    }
}