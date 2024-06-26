#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int color[1005], v, e, x, y;
vector<int> ke[1005];

int dfs(int u, int par){
    color[u] = 1;
    for(int x : ke[u]){
        if(!color[x]){
            if(dfs(x, u)) return true;
        }
        else if(color[x] == 1) return true;
    }
    color[u] = 2;
    return false;
}

void solve(){
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
    }
    int ok = 0;
    for(int i = 1; i <= v; ++i){
        if(!color[i]){
            if(dfs(i, i)){
                ok = 1;
                break;
            }
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
    for(int i = 1; i <= v; ++i){
        color[i] = 0;
        ke[i].clear();
    }
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}