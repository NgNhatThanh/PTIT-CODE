#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    int idx = lower_bound(a, a + n, k) - a;
    (idx == n || a[idx] != k) ? cout << "NO\n" : cout << idx + 1 << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}