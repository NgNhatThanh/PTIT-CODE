#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int l = 0, r = n / 2;
    int res = 0;
    while(l < n / 2 && r < n){
        ++res;
        if(a[l] * 2 <= a[r]) ++l;
        ++r;
    }
    while(l < n / 2) {
        ++res;
        ++l;
    }
    while(r < n) {
        ++res;
        ++r;
    }
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