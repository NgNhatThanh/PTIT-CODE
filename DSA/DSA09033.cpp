#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int v, e, x, y, par[100005], sz[100005];

int Find(int u){
    if(u == par[u]) return u;
    return par[u] = Find(par[u]);
}

void join(int u, int v){
    u = Find(u); v = Find(v);
    if(u == v) return;
    if(sz[u] < sz[v]) swap(u, v);
    par[v] = u;
    sz[u] += sz[v];
}

void solve(){
    cin >> v >> e;
    unordered_map<int, int> cnt;
    for(int i = 1; i <= v; ++i){
        par[i] = i;
        sz[i] = 1;
    }
    while(e--){
        cin >> x >> y;
        ++cnt[x];
        ++cnt[y];
        join(x, y);
    }
    int ok = 1;
    for(int i = 1; i <= v; ++i){
        int par = Find(i);
        if(cnt[i] != sz[par] - 1){
            ok = 0;
            break;
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}