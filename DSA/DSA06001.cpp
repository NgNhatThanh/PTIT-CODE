#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int l = 0, r = n - 1;
    while(l <= r){
        cout << a[r] << ' ';
        if(l != r) cout << a[l] << ' ';
        --r; ++l;
    }
    cout << '\n';
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}