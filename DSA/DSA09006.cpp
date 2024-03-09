#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int st, en, vst[1005], trace[1005];

void dfs(int u){
    vst[u] = 1;
    if(u == en) return;
    for(int x : ke[u]){
        if(!vst[x]){
            trace[x] = u;
            dfs(x);
        }
    }
}

void in(){
    if(!trace[en]) cout << "-1\n";
    else{
        vector<int> path;
        while(en){
            path.push_back(en);
            en = trace[en];
        }
        for(int i = path.size() - 1; i >= 0; --i) cout << path[i] << ' ';
        cout << '\n';  
    }
}

void solve(){   
    int v, e, x ,y;
    cin >> v >> e >> st >> en;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    dfs(st);
    in();
    for(int i = 1; i <= v; ++i){
        trace[i] = 0;
        vst[i] = 0;
        ke[i].clear();
    }
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}