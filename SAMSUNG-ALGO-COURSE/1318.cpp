#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, ok, a[8][8], vst[8][8];
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
char dir[] = {'D', 'L', 'R', 'U'};

int check(int x, int y){
    return x >= 0 && y >= 0 && x < n && y < n && a[x][y] && !vst[x][y];
}

void Try(int i, int j, string path = ""){
    if(i == n - 1 && j == n - 1){
        ok = 1;
        cout << path << ' ';
        return;
    }
    for(int k = 0; k < 4; ++k){
        int x = i + dx[k], y = j + dy[k];
        if(check(x, y)){
            vst[x][y] = 1;
            Try(x, y, path + dir[k]);
            vst[x][y] = 0;
        }
    }
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
            vst[i][j] = 0;
        }
    }
    if(!a[0][0]) cout << "-1\n";
    else{
        vst[0][0] = 1;
        Try(0, 0);
        if(!ok) cout << -1;
        cout << '\n';
        ok = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}