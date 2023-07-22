#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
bool visited[1005];

void dfs(int u){
    visited[u]=1;
    cout<<u<<' ';
    for(int &x : ke[u]){
        if(!visited[x]) dfs(x); 
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int v, e, u;
        cin>>v>>e>>u;
        int x ,y;
        while(e--){
            cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        dfs(u);
        cout<<'\n';
        memset(visited, 0, sizeof(visited));
        for(int i=1;i<=v;++i) ke[i].clear();   
    }
}