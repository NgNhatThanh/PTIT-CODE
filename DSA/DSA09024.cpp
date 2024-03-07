#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005];

void bfs(int u){
    queue<int> q;
    q.push(u);
    vst[u] = 1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << ' ';
        for(int x : ke[v]){
            if(!vst[x]){
                vst[x] = 1;
                q.push(x);
            }
        }
    }
    cout << '\n';
}

void solve(){
    int v, e, st, x ,y;
    cin >> v >> e >> st;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
    }
    bfs(st);
    for(int i = 1; i <= v; ++i) ke[i].clear();
    memset(vst, 0, sizeof vst);
    cout << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}