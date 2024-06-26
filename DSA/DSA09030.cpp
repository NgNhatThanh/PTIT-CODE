#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int v, e, x, y, vst[1005];
vector<int> ke[1005];
set<int> p[3];

int bipart(int u){
    queue<pair<int, int>> q;
    q.push({u, 1});
    p[1].insert(u);
    while(!q.empty()){
        int v = q.front().first;
        int idx = q.front().second;
        q.pop();
        for(int x : ke[v]){
            if(vst[x] && p[idx].count(x)) return false;
            else if(!vst[x]){
                vst[x] = 1;
                p[3 - idx].insert(x);
                q.push({x, 3 - idx});
            }
        }
    }
    return true;
}

void solve(){
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int ok = 1;
    for(int i = 1; i <= v; ++i){
        if(!vst[i] && !bipart(i)){
            ok = 0;
            break;
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        vst[i] = 0;
    }
    p[1].clear();
    p[2].clear();
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}