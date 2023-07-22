#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
bool visited[1005];
int trace[1005];
int v, e, start, stop;

void solve(int start){
    visited[start]=1;
    queue<int> q;
    q.push(start);
    while(q.size()){
        int top=q.front();
        q.pop();
        for(int &x : ke[top]){
            if(!visited[x]){
                trace[x]=top;
                visited[x]=1;
                if(x==stop) return;
                q.push(x);
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> v >> e >> start >> stop;
        int x ,y;
        while(e--){
            cin >> x >> y;
            ke[x].push_back(y);
        }
        solve(start);
        if(!trace[stop]) cout<<-1;
        else{
            stack<int> res;
            res.push(stop);
            while(stop!=start){
                res.push(trace[stop]);
                stop=trace[stop];
            }
            while(res.size()){
                cout<<res.top()<<' ';
                res.pop();
            }
        }
        cout<<'\n';
        memset(visited, 0, sizeof(visited));
        memset(trace, 0, sizeof(trace));
        for(int i=1;i<=v;++i) ke[i].clear();   
    }
}