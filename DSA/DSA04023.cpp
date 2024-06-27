#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    ll res = 0;
    for(int i = 0; i < n; ++i){
        res += lower_bound(a + i + 1, a + n, a[i] + k) - a - i - 1;
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}