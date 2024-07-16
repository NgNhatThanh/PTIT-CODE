#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[11];
int col[11], ok, v, e, m;

void paint(int u){
    if(ok) return;
    if(u == v + 1){
        ok = 1;
        return;
    }
    map<int, int> used;
    for(int x : ke[u]) ++used[col[x]];
    for(int i = 1; i <= m; ++i){
        if(!used[i]){
            col[u] = i;
            paint(u + 1);
            col[u] = 0;
        }
    }
}

void solve(){
    int x, y;
    cin >> v >> e >> m;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    paint(1);
    cout << (ok ? "YES\n" : "NO\n");
    ok = 0;
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        col[i] = 0;
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