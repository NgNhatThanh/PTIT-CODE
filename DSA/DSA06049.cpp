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
    for(int i = 0; i < n - 1; ++i){
        int idx = lower_bound(a + i + 1, a + n, k + a[i]) - a;
        res += idx - i - 1;
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