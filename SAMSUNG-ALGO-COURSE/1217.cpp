#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define fi first 
#define se second
using namespace std;

int inf = INT_MAX;

void solve(){
    int v, e, st, x, y, z;
    cin >> v >> e >> st;
    vector<pii> canh[v + 1];
    while(e--){
        cin >> x >> y >> z;
        canh[x].push_back({y, z});
        canh[y].push_back({x, z});
    }
    vector<int> d(v + 1, inf);
    int vst[v + 1] = {};
    d[st] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, st});
    while(!q.empty()){
        pii tmp = q.top();
        q.pop();
        int u = tmp.se, dd = tmp.fi;
        if(vst[u]) continue;
        vst[u] = 1;
        for(auto c : canh[u]){
            if(d[c.fi] > dd + c.se){
                d[c.fi] = dd + c.se;
                q.push({d[c.fi], c.fi});
            }
        }
    }
    for(int i = 1; i <= v; ++i) cout << d[i] << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}