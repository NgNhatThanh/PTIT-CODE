#include <bits/stdc++.h>
using namespace std;

int a[9][9];
int n, ok;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
char step[] = {'D', 'L', 'R', 'U'};
int vst[8][8];

int check(int x, int y){
    return x >= 0 && y >= 0 && x < n && y < n && a[x][y] && !vst[x][y];
}

void quaylui(int i, int j, string path = ""){
    if(i == n - 1 && j == n - 1){
        cout << path << ' ';
        ok = 1;
        return;
    }
    for(int k = 0; k < 4; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if(check(x, y)){
            vst[x][y] = 1;
            path += step[k];
            quaylui(x, y, path);
            path.pop_back();
            vst[x][y] = 0;
        }
    }
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    if(!a[0][0]) cout << "-1\n";
    else{
        vst[0][0] = 1;
        quaylui(0, 0, "");
        if(!ok) cout << -1;
        cout << '\n';
    }
    memset(vst, 0, sizeof vst);
    ok = 0;
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}