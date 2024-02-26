#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, v;
    cin >> n >> v;
    int val[n], wei[n], dp[n][v + 1] = {};
    for(int &x : wei) cin >> x;
    for(int &x : val) cin >> x;
    for(int i = 0; i < n; ++i){
        for(int j = 1; j <= v; ++j){
            if(!i) dp[i][j] = (j - wei[0] >= 0) ? val[0] : 0;
            else{
                if(j - wei[i] >= 0) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wei[i]] + val[i]);
                else dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n - 1][v] << '\n';
}

int main(){ 
    int t = 1;
    cin >> t;
    while(t--){
        solve();        
    }
}