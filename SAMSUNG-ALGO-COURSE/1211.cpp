#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<int> ke[100005];
int par[100005], sz[100005], canh[100005];

int Find(int u){
    if(u == par[u]) return u;
    return par[u] = Find(par[u]); 
}

void join(int u, int v){
    u = Find(u);
    v = Find(v);
    if(sz[u] < sz[v]) swap(u, v);
    if(u != v){
        par[v] = u;
        sz[u] += sz[v];
    }
    ++canh[u];
}

void solve(){
    int v, e, x, y;
    cin >> v >> e;
    for(int i = 1; i <= v; ++i){
        par[i] = i;
        sz[i] = 1;
        canh[i] = 0;
    }
    while(e--){
        cin >> x >> y;
        join(x, y);
    }
    for(int i = 1; i <= v; ++i){
        int tmp = Find(i);
        if(canh[tmp] != sz[tmp] * (sz[tmp] - 1) / 2){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}