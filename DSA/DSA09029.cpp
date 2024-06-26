#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int v, e, x, y, vst[12];
vector<int> ke[12];

int hamilton(int u, int cnt){
    if(cnt == v) return true;
    vst[u] = 1;
    for(int x : ke[u]){
        if(!vst[x]){
            if(hamilton(x, cnt + 1)) return true;
        }
    }
    vst[u] = 0;
    return false;
}

void solve(){
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int ok = 0;
    for(int i = 1; i <= v; ++i){
        if(hamilton(i, 1)){
            ok = 1;
            break;
        }
        memset(vst, 0, sizeof vst);
    }
    cout << ok << '\n';
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        vst[i] = 0;
    }
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}