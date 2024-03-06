#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int vst[1005];

int dfs(int u){
    cout << u << ' ';
    for(int x : ke[u]){
        if(!vst[x]) dfs(x);
    }
}

void solve(){
    int v, e, st;
    cin >> v >> e >> st;
    while(#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int v, e;
    cin >> v >> e;
    vector<int> ke[v + 1];
    int x, y;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
    }
    for(int i = 1; i <= v; ++i){
        cout << i << ": ";
        for(int k : ke[i]) cout << k << ' ';
        cout << '\n';
    }
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
})
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}