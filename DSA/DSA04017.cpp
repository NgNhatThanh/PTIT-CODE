#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll a[n], b[n - 1];
    for(ll &x : a) cin >> x;
    for(ll &x : b) cin >> x;
    for(int i = 0; i < n - 1; ++i){
        if(b[i] != a[i]){
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << n << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}