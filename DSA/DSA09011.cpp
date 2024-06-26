#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, m, a[505][505], vst[505][505];
int dx[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy[] = {1, -1, 0, 1, -1, 0, 1, -1};

int check(int x, int y){
    return x && y && x <= n && y <= m && a[x][y] && !vst[x][y];
}

void bfs(int i, int j){
    queue<pair<int, int>> q;
    q.push({i, j});
    vst[i][j] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k = 0; k < 8; ++k){
            int X = x + dx[k];
            int Y = y + dy[k];
            if(check(X, Y)){
                vst[X][Y] = 1;
                q.push({X, Y});
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j) cin >> a[i][j];
    }
    int res = 0;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(a[i][j] && !vst[i][j]){
                bfs(i, j);
                ++res;
            }
        }
    }
    cout << res << '\n';
    memset(vst, 0, sizeof vst);
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}