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
        for(int x : ke[v]){
            if(!vst[x]){
                vst[x] = 1;
                q.push(x);
            }
        }
    }   
}

void solve(){   
    int v, e, x ,y;
    cin >> v >> e;
    cout << v << ' ' << e << '\n';
    while(e--){
        cin >> x >> y;
        cout << x << ' ' << y << '\n';
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int cnt = 0;
    for(int i = 1; i <= v; ++i){
        if(!vst[i]){
            ++cnt;
            bfs(i);
        }
    }
    cout << cnt << '\n';
    for(int i = 1; i <= v; ++i){
        vst[i] = 0;
        ke[i].clear();
    }
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}