#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, m, vst[505][505];
char a[505][505];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int ok;

struct ToaDo{
    int x, y;

    ToaDo(){}

    ToaDo(int x, int y){
        this -> x = x;
        this -> y = y;
    }

    bool operator ==(ToaDo other){
        return other.x == x && other.y == y;
    }

    bool isValid(){
        return x && y && x <= n && y <= n && a[x][y] != '*';
    }
};

ToaDo st, en;

void dfs(ToaDo cur, ToaDo prev, int cnt){
    if(cnt > 2) return;
    if(cur == en){
        ok = 1;
        return;
    }
    vst[cur.x][cur.y] = 1;
    for(int k = 0; k < 4; ++k){
        ToaDo move = ToaDo(cur.x + dx[k], cur.y + dy[k]);
        if(move.isValid() && !(move == prev)){
            if(move.x == prev.x || move.y == prev.y) dfs(move, cur, cnt);
            else dfs(move, cur, cnt + 1);
        }
    }
    vst[cur.x][cur.y] = 0;
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
            if(a[i][j] == 'S') st = ToaDo(i, j);
            else if(a[i][j] == 'T') en = ToaDo(i, j);
        }
    }
    dfs(st, st, 0);
    cout << (ok ? "YES\n" : "NO\n");
    ok = 0;
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