#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<int> ke[1005];
int vst[1005];

int dfs(int u){
    vst[u] = 1;
    int cnt = 0;
    for(int x : ke[u]){
        if(!vst[x]) cnt += dfs(x);
    }
    return cnt + 1;
}

void solve(){
    int v, e, x, y;
    cin >> v >> e;
    vector<pair<int, int>> canh;
    while(e--){
        cin >> x >> y;
        canh.push_back({x, y});
        ke[x].insert(y);
        ke[y].insert(x);
    }
    vector<pair<int, int>> res;
    for(auto c : canh){
        ke[c.first].erase(c.second);
        ke[c.second].erase(c.first);
        if(dfs(1) != v) res.push_back({min(c.first, c.second), max(c.first, c.second)});
        ke[c.first].insert(c.second);
        ke[c.second].insert(c.first);
        for(int i = 1; i <= v; ++i) vst[i] = 0;
    }
    for(int i = 1; i <= v; ++i) ke[i].clear();
    sort(begin(res), end(res));
    for(auto c : res) cout << c.first << ' ' << c.second << ' ';
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