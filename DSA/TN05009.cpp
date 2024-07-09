#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<int> ke[1005];
int v, e, x, y, ok, vst[1005];
vector<int> res;

void dfs(int u){
    if(ok) return;
    res.push_back(u);
    vst[u] = 1;
    for(int x : ke[u]){
        if(x == 1 && res.size() > 2){
            res.push_back(1);
            for(int k : res) cout << k << ' ';
            cout << '\n';
            ok = 1;
            return;
        }
        if(!vst[x]) dfs(x);
    }
    res.pop_back();
}

void solve(){
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].insert(y);
        ke[y].insert(x);
    }
    vst[1] = 1;
    dfs(1);
    if(!ok) cout << "NO\n";
    ok = 0;
    res.clear();
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