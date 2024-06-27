#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int res[m + n - 1] = {};
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j) res[i + j] += a[i] * b[j];
    }
    for(int x : res) cout << x << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}