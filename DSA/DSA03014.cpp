#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

unordered_map<ll, int> cube;

void precal(){
    for(int i = 1; i <= 1000000; ++i) cube[1ll * i * i * i] = 1;
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    ll res = -1;
    for(int i = 1; i < (1 << n); ++i){
        ll tmp = 0;
        for(int j = 0; j < n; ++j){
            if(i & (1 << j)) tmp = tmp * 10 + s[j] - '0';
        }
        if(cube[tmp]) res = max(res, tmp); 
    }
    cout << res << '\n';
}

int main(){
    precal();
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}