#include <bits/stdc++.h>
#define ll long long
using namespace std;

int vst[1005];
vector<int> ke[1005];

void bfs(int u){
    queue<int> q;
    q.push(u);
    vst[u] = 1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x : ke[v]){
            if(!vst[x]){
                vst[x] = 1;
                q.push(x);
            }
        }
    }
}

void solve(){
    int v, e, x, y;
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int res = 0;
    for(int i = 1; i <= v; ++i){
        if(!vst[i]){
            ++res;
            bfs(i);
        }
        ke[i].clear();
        vst[i] = 0;
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}