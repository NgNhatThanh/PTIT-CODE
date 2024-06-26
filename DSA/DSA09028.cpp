#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int v, e, m, x, y;
vector<int> ke[1005];
int col[1005];

int colorGraph(int u){
    if(col[u]) return colorGraph(u + 1);
    for(int i = 1; i <= m; ++i){
        int canUse = 1;
        for(int x : ke[u]){
            if(col[x] == i){
                canUse = 0;
                break;
            }
        }
        if(canUse){
            if(u == v) return 1;
            col[u] = i;
            if(colorGraph(u + 1)) return 1;
            col[u] = 0;
        }
    }
    return 0;
}

void solve(){
    cin >> v >> e >> m;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
        
    }
    cout << (colorGraph(1) ? "YES\n" : "NO\n");
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        col[i] = 0;
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