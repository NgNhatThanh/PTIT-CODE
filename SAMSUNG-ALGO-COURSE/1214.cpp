#include <bits/stdc++.h>
#define ll long long
#define ppi pair<int, pair<int, int>>
#define fi first 
#define se second
using namespace std;

int par[105];

int Find(int u){
    if(u == par[u]) return u;
    return par[u] = Find(par[u]);
}

int join(int u, int v){
    u = Find(u); v = Find(v);
    if(u == v) return 0;
    par[v] = u;
    return 1;
}

void solve(){
    int v, e, x, y, z;
    cin >> v >> e;
    for(int i = 1; i <= v; ++i) par[i] = i;
    vector<ppi> canh;
    while(e--){
        cin >> x >> y >> z;
        canh.push_back({z, {min(x, y), max(x, y)}});
    }
    sort(begin(canh), end(canh));
    int res = 0;
    for(auto c : canh){
        if(join(c.se.fi, c.se.se)) res += c.fi;
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}