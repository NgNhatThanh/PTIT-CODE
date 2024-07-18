#include <bits/stdc++.h>
#define ll long long
#define ppi pair<pair<int, int>, int>
#define fi first 
#define se second
using namespace std;

int inf = INT_MAX / 2;

void solve(){
    int v, e, x, y, z;
    cin >> v >> e;
    vector<vector<int>> d(v + 1, vector<int>(v + 1, inf));
    for(int i = 1; i <= v; ++i) d[i][i] = 0;
    while(e--){
        cin >> x >> y >> z;
        d[x][y] = d[y][x] = z; 
    }
    for(int k = 1; k <= v; ++k){
        for(int i = 1; i <= v; ++i){
            for(int j = 1; j <= v; ++j){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    int q;
    cin >> q;
    while(q--){
        cin >> x >> y;
        cout << d[x][y] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}