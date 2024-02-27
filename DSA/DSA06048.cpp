#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    int res = -1;
    for(int i = 0; i < n; ++i){
        if(a[i] > a[i + 1]) res = i;
    }
    cout << res + 1 << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}