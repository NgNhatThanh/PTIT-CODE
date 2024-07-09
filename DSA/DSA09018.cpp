#include <bits/stdc++.h>
#define ll long long
using namespace std;

int v, e, x, y;
vector<int> ke[1005];
int vst[1005];

void dfs(int u){
    vst[u] = 1;
    for(int x : ke[u]){
        if(!vst[x]) dfs(x);
    }
}

int Tplt(){
    int cnt = 0;
    for(int i = 1; i <= v; ++i){
        if(!vst[i]){
            ++cnt;
            dfs(i);
        }
    }
    memset(vst, 0, (v + 1) * 4);
    return cnt;
}

void solve(){
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int tplt = Tplt();
    for(int i = 1; i <= v; ++i){
        vst[i] = 1;
        int tmp = Tplt();
        if(tmp > tplt) cout << i  << ' ';
    }
    for(int i = 1; i <= v; ++i) ke[i].clear();
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}