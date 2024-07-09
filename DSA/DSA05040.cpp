#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int xuoi[n + 1], nguoc[n + 1];
    xuoi[0] = 1;
    for(int i = 1; i < n; ++i){
        xuoi[i] = 1;
        if(a[i] > a[i - 1]) xuoi[i] += xuoi[i - 1];
    }
    nguoc[n - 1] = 1;
    for(int i = n - 2; i >= 0; --i){
        nguoc[i] = 1;
        if(a[i] > a[i + 1]) nguoc[i] += nguoc[i + 1];
    }
    int res = 0;
    for(int i = 0; i < n; ++i) res = max(res, xuoi[i] + nguoc[i] - 1);
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