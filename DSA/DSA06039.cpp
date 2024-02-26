#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n + 1];
    unordered_map<int, int> mp;
    int res = INT_MAX;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(mp[a[i]]) res = min(res, mp[a[i]]);
        mp[a[i]] = i; 
    }
    if(res == INT_MAX) cout << "NO\n";
    else cout << a[res] << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}