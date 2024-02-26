#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int c, n;
    cin >> c >> n;
    int a[n], dp[c + 1] = {};
    dp[0] = 1;
    for(int &x : a){
        cin >> x;
        for(int j = c; j >= x; --j) dp[j] = max(dp[j], dp[j - x]);
    }
    for(int i = c; i >= 0; --i){
        if(dp[i]){
            cout << i;
            return;
        }
    }
}

int main(){ 
    int t = 1;
    // cin >> t;
    while(t--){
        solve();        
    }
}