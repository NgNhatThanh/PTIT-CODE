#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005];

void dfs(int u){
    cout << u << ' ';
    vst[u] = 1;
    for(int x : ke[u]){
        if(!vst[x]) dfs(x);
    }
}

void solve(){
    int v, e, x, y, u;
    cin >> v >> e >> u;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    dfs(u);
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        vst[i] = 0;
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}