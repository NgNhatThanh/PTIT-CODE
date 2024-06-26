#include <bits/stdc++.h>
using namespace std;

int v, e, x, y;
vector<int> ke[1005];
int vst[1005];

vector<pair<int, int>> edges;

void dfs(int u){
    vst[u] = 1;
    for(int x : ke[u]){
        if(!vst[x]){
            edges.push_back({u, x});
            dfs(x);
        }
    }
}

void solve(){
    int u;
    cin >> v >> e >> u;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    dfs(u);
    if(edges.size() != v - 1) cout << "-1\n";
    else{
        for(auto x : edges) cout << x.first << ' ' << x.second << '\n';
    }
    edges.clear();
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        vst[i] = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}