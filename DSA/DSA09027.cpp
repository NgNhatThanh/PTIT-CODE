#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005];

int dfs(int u, int en){
    vst[u] = 1;
    for(int x : ke[u]){
        if(x == en) return 1;
        if(!vst[x]) return dfs(x, en);
    }
    return 0;
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
        if(dfs(x, y)) cout << "YES\n";
        else cout << "NO\n";
        memset(vst, 0, sizeof vst);
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