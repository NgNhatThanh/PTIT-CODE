#include <bits/stdc++.h>
#define ll long long
#define pli pair<long long, int>
#define fi first 
#define se second
using namespace std;

ll inf = LLONG_MAX / 4;
int v, e, x, y, z;

void solve(){
    vector<pair<int, int>> canh[v + 1];
    while(e--){
        cin >> x >> y >> z;
        canh[x].push_back({y, z});
        canh[y].push_back({x, z});
    }
    vector<ll> d(v + 1, inf);
    d[1] = 0;
    ll res[v + 1] = {};
    res[1] = 1;
    int vst[v + 1] = {};
    priority_queue<pli, vector<pli>, greater<pli>> q;
    q.push({0, 1});
    while(!q.empty()){
        pli tmp = q.top();
        q.pop();
        int u = tmp.se;
        if(vst[u]) continue;
        vst[u] = 1;
        for(auto c : canh[u]){
            if(d[c.fi] > c.se + d[u]){
                d[c.fi] = c.se + d[u];
                q.push({d[c.fi], c.fi});
                res[c.fi] = res[u];
            }
            else if(d[c.fi] == c.se + d[u]) res[c.fi] += res[u];
        }
    }
    cout << d[v] << ' ' << res[v] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    // cin >> t;
    while(cin >> v >> e){
        solve();
    }
}