#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    int l = 1, r = n;   
    while(l <= n && a[l] == b[l]) ++l;
    while(r > l && a[r] == b[r]) --r;
    cout << l << ' ' << r << '\n';
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}