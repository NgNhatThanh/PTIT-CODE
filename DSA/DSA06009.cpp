#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    map<int, int> mp;
    for(int &x : a){
        cin >> x;
        ++mp[x];
    }
    int res = 0;
    for(int x : a) res += mp[k - x] - (k - x == x);
    cout << res / 2 << '\n';
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}