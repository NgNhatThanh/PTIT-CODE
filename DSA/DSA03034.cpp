#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m], c[k];
    map<int, int> mp;
    for(int &x : a){
        cin >> x;
        ++mp[x];
    }
    for(int &x : b) cin >> x;
    for(int &x : c) cin >> x;
    int ok = 0;
    for(auto x : mp){
        int cnt1 = upper_bound(b, b + m, x.first) - lower_bound(b, b + m, x.first);
        int cnt2 = upper_bound(c, c + k, x.first) - lower_bound(c, c + k, x.first);
        int cnt = min({cnt1, cnt2, x.second});
        if(cnt){
            ok = 1;
            while(cnt--) cout << x.first << ' ';
        }
    }
    if(!ok) cout << "NO";
    cout << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}