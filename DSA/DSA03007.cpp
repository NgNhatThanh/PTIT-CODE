#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll a[n], b[n];
    for(ll &x : a) cin >> x;
    for(ll &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + n, greater<ll>());
    ll res = 0;
    for(int i = 0; i < n; ++i) res += a[i] * b[i];
    cout << res << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}