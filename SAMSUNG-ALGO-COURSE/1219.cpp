#include <bits/stdc++.h>
#define ll long long
#define ppi pair<pair<int, int>, int>
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
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) par[i] = i;
    pair<double, double> a[n];
    for(auto &x : a) cin >> x.fi >> x.se;
    vector<pair<double, pair<int, int>>> canh;
    for(int i = 0; i < n; ++i){
        double x1 = a[i].fi, y1 = a[i].se;
        for(int j = i + 1; j < n; ++j){
            double x2 = a[j].fi, y2 = a[j].se;
            double kc = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
            canh.push_back({kc, {i, j}});
        }
    }
    sort(begin(canh), end(canh));
    double res = 0;
    for(auto c : canh){
        int u = c.se.fi, v = c.se.se;
        double w = c.fi;
        if(join(u, v)) res += w;
    }
    cout << setprecision(6) << fixed << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}