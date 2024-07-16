#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<int> ke[10005];
int par[10005], sz[10005];

int Find(int u){
    if(u == par[u]) return u;
    return par[u] = Find(par[u]); 
}

void join(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u != v){
        if(sz[u] < sz[v]) swap(u, v);
        par[v] = u;
        sz[u] += sz[v];
    }
}

void solve(){
    int n, k, m;
    cin >> n >> k >> m;
    int tmp = n * n;
    int x, y, z, t;
    for(int i = 1; i <= tmp; ++i){
        x = i - 1, y = i + 1, z = i - n, t = i + n;
        if(ceil(1.0 * x / n) == ceil(1.0 * i / n)) ke[i].insert(x);
        if(ceil(1.0 * y / n) == ceil(1.0 * i / n)) ke[i].insert(y);
        if(z > 0) ke[i].insert(z);
        if(t <= tmp) ke[i].insert(t);
    }
    while(m--){
        cin >> x >> y >> z >> t;
        x = (x - 1) * n + y; z = (z - 1) * n + t;
        ke[x].erase(z);
        ke[z].erase(x);
    }
    for(int i = 1; i <= tmp; ++i){
        par[i] = i;
        sz[i] = 1;
    }
    for(int i = 1; i <= tmp; ++i){
        for(int k : ke[i]) join(i, k);
    }
    vector<int> sheeps;
    while(k--){
        cin >> x >> y;
        sheeps.push_back((x - 1) * n + y);
    }
    int res = 0;
    for(int i = 0; i < sheeps.size(); ++i){
        for(int j = i + 1; j < sheeps.size(); ++j){
            int p1 = Find(sheeps[i]), p2 = Find(sheeps[j]);
            if(p1 != p2) ++res;
        }
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}