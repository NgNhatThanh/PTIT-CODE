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
        cout << v << ' ';
        q.pop();
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
    int v, e, x, y, u;
    cin >> v >> e >> u;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    bfs(u);
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        vst[i] = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}