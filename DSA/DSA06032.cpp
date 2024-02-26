#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    ll a[n];
    for(ll &x : a) cin >> x;
    sort(a, a + n);
    ll res = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            ll idx1 = lower_bound(a + j + 1, a + n, k - a[j] - a[i]) - a;
            --idx1;
            res += idx1 - j;
        }
    }
    cout << res << '\n';    
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}