#include <bits/stdc++.h>
#define ll long long
#define pip pair<int, pair<int, int>>
#define fi first 
#define se second
using namespace std;

int inf = INT_MAX / 2, n, m;
int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};

int check(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < m;
}

void solve(){
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> d(n, vector<int>(m, inf));
    d[0][0] = a[0][0];
    priority_queue<pip, vector<pip>, greater<pip>> q;
    q.push({a[0][0], {0, 0}});
    while(!q.empty()){
        pip tmp = q.top();
        q.pop();
        int i = tmp.se.fi, j = tmp.se.se;
        for(int k = 0; k < 4; ++k){
            int x = i + dx[k], y = j + dy[k];
            if(check(x, y) && d[x][y] > d[i][j] + a[x][y]){
                d[x][y] = d[i][j] + a[x][y];
                q.push({d[x][y], {x, y}});
            }  
        }
    }
    cout << d[n - 1][m - 1] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}