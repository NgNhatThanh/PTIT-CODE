#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<int> ke[1005];
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
    vector<pair<int, int>> canh;
    while(e--){
        cin >> x >> y;
        canh.push_back({min(x, y), max(x, y)});
        ke[x].insert(y);
        ke[y].insert(x);
    }
    sort(begin(canh), end(canh));
    int tplt = Tplt(v);
    for(auto c : canh){
        x = c.first, y = c.second;
        ke[x].erase(y);
        ke[y].erase(x);
        int tmp = Tplt(v);
        ke[x].insert(y);
        ke[y].insert(x);
        if(tmp > tplt) cout << x << ' ' << y << ' ';
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