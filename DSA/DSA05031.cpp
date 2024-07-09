#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dp[10001];

int check(int n){
    return sqrt(n) == (int)sqrt(n);
}

void precal(){
    dp[1] = 1;
    for(int i = 2; i <= 10000; ++i){
        dp[i] = i;
        if(check(i)) dp[i] = 1;
        else{
            for(int j = i - 1; j >= i / 2; --j) dp[i] = min(dp[i], dp[j] + dp[i - j]);
        }
    }
}

void solve(){
    int n;
    cin >> n;
    cout << dp[n] << '\n';
}

int main(){
    precal();
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}   