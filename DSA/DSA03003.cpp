#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int res = 0;
    for(int i = 1; i < n; ++i) (res += (1ll * a[i] * i) % mod) %= mod;
    cout << res << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}