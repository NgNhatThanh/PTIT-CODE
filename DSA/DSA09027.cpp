#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005];
int ok;

void dfs(int u, int en){
    vst[u] = 1;
    for(int x : ke[u]){
        if(x == en){
            ok = 1;
            return;
        }
        if(!vst[x]){
            dfs(x, en);
        }
    }
}

void solve(){
    int v, e, x, y, q;
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    cin >> q;
    while(q--){
        cin >> x >> y;
        dfs(x, y);
        (ok) ? cout << "YES\n" : cout << "NO\n";
        ok = 0;
        memset(vst, 0, sizeof vst);
    }
    for(int i = 1; i <= v; ++i) ke[i].clear();
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}