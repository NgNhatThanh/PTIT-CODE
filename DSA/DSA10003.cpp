#include <bits/stdc++.h>
using namespace std;

int v, e, x, y;
int par[1005];

int Find(int u){
    if(u == par[u]) return u;
    return par[u] = Find(par[u]);
}

int join(int u, int v){
    u = Find(u); v = Find(v);
    if(u == v) return 0;
    par[v] = u;
    return 1;
}

void solve(){
    cin >> v >> e;
    for(int i = 1; i <= v; ++i) par[i] = i;
    int ok = 0;
    while(e--){
        cin >> x >> y;
        if(!join(x, y)) ok = 1;
    }
    cout << (ok ? "YES\n" : "NO\n");
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}