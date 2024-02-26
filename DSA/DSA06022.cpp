#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int idx = upper_bound(a, a + n, a[0]) - a;
    if(idx == n) cout << "-1\n";
    else cout << a[0] << ' ' << a[idx] << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}