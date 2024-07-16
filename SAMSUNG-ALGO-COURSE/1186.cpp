#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005], trace[1005];

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
                trace[x] = v;
                q.push(x);
            }
        }
    }
}

void in(int st, int en){
    vector<int> path;
    while(en){
        path.push_back(en);
        en = trace[en];
    }
    for(int i = path.size() - 1; i >= 0; --i) cout << path[i] << ' ';
    cout << '\n';
}

void solve(){
    int v, e, x, y, st, en;
    cin >> v >> e >> st >> en;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
    }
    bfs(st);
    if(!vst[en]) cout << "-1\n";
    else in(st, en);
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        vst[i] = 0;
        trace[i] = 0;
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