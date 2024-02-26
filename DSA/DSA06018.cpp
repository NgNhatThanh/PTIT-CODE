#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int res = 0;
    for(int i = 0; i < n - 1; ++i) res += a[i + 1] - a[i] - 1 + (a[i + 1] == a[i]);
    cout << res << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}