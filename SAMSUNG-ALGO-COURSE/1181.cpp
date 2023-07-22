#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
bool visited[1005];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(q.size()){
        int top=q.front();
        q.pop();
        cout<<top<<' ';
        for(int &x : ke[top]){
            if(!visited[x]){
                visited[x]=1;
                q.push(x);
            }
        }
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
        bfs(u);
        cout<<'\n';
        memset(visited, 0, sizeof(visited));
        for(int i=1;i<=v;++i) ke[i].clear();   
    }
}