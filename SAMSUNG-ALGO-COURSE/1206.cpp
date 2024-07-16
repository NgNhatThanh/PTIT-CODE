#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[11];
int vst[11], ok, v, e;

void hamilton(int u, int cnt = 1){
    if(ok) return;
    if(cnt == v){
        ok = 1;
        return;
    }
    for(int x : ke[u]){
        if(!vst[x]){
            vst[x] = 1;
            hamilton(x, cnt + 1);
            vst[x] = 0;
        }
    }
}

void solve(){
    int x, y;
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1; i <= v; ++i){
        vst[i] = 1;
        hamilton(i);
        memset(vst, 0, (v + 1) * 4);
        if(ok) break;
    }
    cout << ok << '\n';
    ok = 0;
    for(int i = 1; i <= v; ++i) ke[i].clear();
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}