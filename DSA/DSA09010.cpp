#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int vst[1005], v, e, x, y;
vector<int> ke[1005];

void dfs(int u){
    vst[u] = 1;
    for(int x : ke[u]){
        if(!vst[x]) dfs(x);
    }
}

void solve(){
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
    }
    int ok = 1;
    for(int i = 1; i <= v; ++i){
        dfs(i);
        for(int j = 1; j <= v; ++j){
            if(!vst[j]){
                ok = 0;
            }
            vst[j] = 0;
        }
        if(!ok) break;
    }
    cout << (ok ? "YES\n" : "NO\n");
    for(int i = 1; i <= v; ++i) ke[i].clear();
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}