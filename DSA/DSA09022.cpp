#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005];

void dfs(int u){
    vst[u] = 1;
    cout << u << ' ';
    for(int x : ke[u]){
        if(!vst[x]) dfs(x);
    }
}

void solve(){
    int v, e, st, x ,y;
    cin >> v >> e >> st;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
    }
    dfs(st);
    for(int i = 1; i <= v; ++i) ke[i].clear();
    memset(vst, 0, sizeof vst);
    cout << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}