#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

int dp[101][10];
// dp[i][j] là số lượng số có i chữ số, kết thúc bởi số j thỏa mãn đề bài

void precal(){
    for(int i = 0; i < 10; ++i) dp[1][i] = 1;
    for(int i = 2; i <= 100; ++i){
        for(int j = 1; j < 10; ++j){
            for(int k = j; k >= 1; --k) (dp[i][j] += dp[i - 1][k]) %= mod;
        }
    }
}

void solve(){
    int n;
    cin >> n;
    int res = 0;
    for(int i = 1; i <= n; ++i){
        for(int j = 0; j < 10; ++j) (res += dp[i][j]) %= mod;
    }
    cout << res << '\n';
}

int main(){ 
    precal();
    int t = 1;
    cin >> t;
    while(t--){
        solve();        
    }
}