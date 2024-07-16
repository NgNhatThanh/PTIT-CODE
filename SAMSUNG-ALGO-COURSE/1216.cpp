#include <bits/stdc++.h>
#define ll long long
#define ppi pair<int, pair<int, int>>
#define fi first 
#define se second
using namespace std;

int inf = INT_MAX;

int check(int v, int st, vector<ppi> &canh){
    vector<int> d(v + 1, inf);
    d[st] = 0;
    for(int i = 1; i < v; ++i){
        for(auto c : canh){
            int u = c.se.fi, a = c.se.se;
            if(d[u] != inf && d[a] > d[u] + c.fi){
                d[a] = d[u] + c.fi;
            }
        }
    }
    int ok = 0;
    for(int i = 0; i < v; ++i){
        for(auto c : canh){
            int u = c.se.fi, a = c.se.se;
            if(d[u] != inf && d[a] > d[u] + c.fi){
                ok = 1;
                break;
            }
        }
    }
    return ok;
}

void solve(){
    int v, e, x, y, z;
    cin >> v >> e;
    vector<ppi> canh;
    while(e--){
        cin >> x >> y >> z;
        canh.push_back({z, {x, y}});
    }
    for(int i = 1; i <= v; ++i){
        if(check(v, i, canh)){
            cout << 1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}