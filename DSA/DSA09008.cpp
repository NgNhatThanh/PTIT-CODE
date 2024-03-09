#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005];

void dfs(int u){
    vst[u] = 1;
    for(int x : ke[u]){
        if(!vst[x]) dfs(x);
    }
}

void solve(){   
    int v, e, x ,y;
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int cnt = 0;
    for(int i = 1; i <= v; ++i){
        if(!vst[i]){
            ++cnt;
            dfs(i);
        }
    }
    cout << cnt << '\n';
    for(int i = 1; i <= v; ++i){
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