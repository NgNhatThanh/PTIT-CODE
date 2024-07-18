#include <bits/stdc++.h>
#define ll long long
#define pip pair<int, pair<int, int>>
#define fi first 
#define se second
using namespace std;

int inf = INT_MAX / 2;

void solve(){
    int v, e, x, y;
    cin >> v >> e;
    vector<vector<int>> d(v + 1, vector<int>(v + 1, inf));
    for(int i = 1; i <= v; ++i) d[i][i] = 0;
    while(e--){
        cin >> x >> y;
        d[x][y] = 1;
    }   
    for(int k = 1; k <= v; ++k){
        for(int i = 1; i <= v; ++i){
            for(int j = 1; j <= v; ++j){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    int sum = 0, cnt = 0;
    for(int i = 1; i <= v; ++i){
        for(int j = 1; j <= v; ++j){
            if(i != j && d[i][j] != inf){
                sum += d[i][j];
                ++cnt;
            }
        }
    }
    double res = 1.0 * sum / cnt;
    cout << setprecision(2) << fixed << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}