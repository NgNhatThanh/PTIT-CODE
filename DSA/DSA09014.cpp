#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int par[1005], v, e, x, y;

int Find(int u){
    if(u == par[u]) return u;
    return par[u] = Find(par[u]);
}

int join(int u, int v){
    u = Find(u); v = Find(v);
    if(u == v) return 0;
    par[u] = v;
    return 1;
}

void solve(){
    cin >> v >> e;
    for(int i = 1; i <= v; ++i) par[i] = i;
    int ok = 1;
    while(e--){
        cin >> x >> y;
        if(!join(x, y)) ok = 0;
    }
    ok ? cout << "NO\n" : cout << "YES\n";
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}