#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, sum = 0;
    cin >> n;
    int a[n], dp[10001] = {};
    dp[0] = 1;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    if(sum % 2) cout << "NO\n";
    else{
        sum /= 2;   
        for(int i = 0; i < n; ++i){
            for(int j = sum; j >= a[i]; --j) dp[j] = max(dp[j], dp[j - a[i]]); 
        }
        (dp[sum]) ? cout << "YES\n" : cout << "NO\n";
    }
}

int main(){ 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}