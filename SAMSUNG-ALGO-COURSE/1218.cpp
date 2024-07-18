#include <bits/stdc++.h>
#define ll long long
#define ppi pair<pair<int, int>, int>
#define fi first 
#define se second
using namespace std;

int inf = INT_MAX;

void solve(){
    int v, e, st, x, y, z;
    cin >> v >> e >> st;
    vector<ppi> canh;
    while(e--){
        cin >> x >> y >> z;
        canh.push_back({{x, y}, z});
    }
    vector<int> d(v + 1, inf);
    d[st] = 0;
    for(int i = 1; i < v; ++i){
        for(auto c : canh){
            int u = c.fi.fi, v = c.fi.se, w = c.se;
            if(d[u] != inf && d[v] > d[u] + w) d[v] = d[u] + w;
        }
    }
    for(auto c : canh){
        int u = c.fi.fi, v = c.fi.se, w = c.se;
        if(d[u] != inf && d[v] > d[u] + w){
            cout << "-1\n";
            return;
        }
    }
    for(int i = 1; i <= v; ++i){
        if(d[i] != inf) cout << d[i] << ' ';
        else cout << "INFI ";
    }
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