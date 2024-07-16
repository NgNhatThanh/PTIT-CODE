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

int Tplt(int v){
    int res = 0;
    for(int i = 1; i <= v; ++i){
        if(!vst[i]){
            ++res;
            dfs(i);
        }
    }
    memset(vst, 0, (v + 1) * 4);
    return res;
}

void solve(){
    int v, e, x, y;
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int tplt = Tplt(v);
    for(int i = 1; i <= v; ++i){
        vst[i] = 1;
        int tmp = Tplt(v);
        if(tmp > tplt) cout << i << ' ';
    }
    cout << '\n';
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