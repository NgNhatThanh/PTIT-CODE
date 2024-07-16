#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005], ok;

void dfs(int u, int prev){
    vst[u] = 1;
    for(int x : ke[u]){
        if(!vst[x]) dfs(x, u);
        else if(x != prev) ok = 1;
    }
}

void solve(){
    int v, e, x, y;
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1; i <= v; ++i){
        if(!vst[i]) dfs(i, i);
    }
    cout << (ok ? "YES\n" : "NO\n");
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        vst[i] = 0;
    }
    ok = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}