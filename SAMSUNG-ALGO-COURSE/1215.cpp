#include <bits/stdc++.h>
#define ll long long
#define ppi pair<int, pair<int, int>>
#define fi first 
#define se second
using namespace std;

int inf = INT_MAX;

void solve(){
    int v, e, x, y, z;
    cin >> v >> e;
    int ke[v + 1][v + 1] = {};
    while(e--){
        cin >> x >> y >> z;
        ke[x][y] = ke[y][x] = z;
    }
    int res = 0;
    int d[v + 1], truoc[v + 1];
    for(int i = 1; i <= v; ++i){
        if(ke[1][i]){
            d[i] = ke[1][i];
            truoc[i] = 1;
        }
        else d[i] = inf;
    }
    d[1] = 0;
    for(int i = 1; i < v; ++i){
        int ma = inf, u;
        for(int j = 1; j <= v; ++j){
            if(d[j] && d[j] < ma){
                ma = d[j];
                u = j;
            }
        }
        res += ke[u][truoc[u]];
        for(int j = 1; j <= v; ++j){
            if(ke[j][u] && d[j] > ke[u][j]){
                d[j] = ke[u][j];
                truoc[j] = u;
            }
        }
        d[u] = 0;
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