#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int res = INT_MAX;
    for(int i = 1; i < n; ++i) res = min(res, a[i] - a[i - 1]);
    cout << res << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}