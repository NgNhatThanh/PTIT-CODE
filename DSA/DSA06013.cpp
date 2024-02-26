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
    (mp[k]) ? cout << mp[k] << '\n' : cout << "-1\n";
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}