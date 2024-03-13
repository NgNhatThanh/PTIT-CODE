#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005], trace[1005], st, en;

void bfs(int u){
    queue<int> q;
    q.push(u);
    vst[u] = 1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        if(v == en) return;
        for(int x : ke[v]){
            if(!vst[x]){
                trace[x] = v;
                vst[x] = 1;
                q.push(x);
            }
        }
    }
}

void in(){
    if(!trace[en]) cout << "-1\n";
    else{
        stack<int> path;
        while(en){
            path.push(en);
            en = trace[en];
        }
        while(!path.empty()){
            cout << path.top() << ' ';
            path.pop();  
        }
        cout << '\n';  
    }
}

void solve(){
    int v, e, x, y;
    cin >> v >> e >> st >> en;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
    }
    bfs(st);
    in();
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        vst[i] = trace[i] = 0;
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