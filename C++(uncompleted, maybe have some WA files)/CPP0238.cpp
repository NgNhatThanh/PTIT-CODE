#include <bits/stdc++.h>
#define ll long long
using namespace std;

char a[25][25];
int n, m;
int ok = 1;
int vst[25][25];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

int bien(int i, int j){
    return i==1 || j==1 || i==n || j==m;
}

int kt(int i, int j){
    return !vst[i][j] && i && j && i<=n && j<=m && a[i][j] == 'O';
}

int kt2(int i, int j){
    return i && j && i<=n && j<=m && a[i][j] == 'O';
}

void check(int i, int j){
    vst[i][j] = 1;
    if(bien(i, j)) ok = 0;
    for(int k=0; k<4; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if(kt(x, y)) check(x, y);
    }
}

void loang(int i, int j){
    a[i][j] = 'X';
    for(int k=0; k<4; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if(kt2(x, y)) loang(x, y);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j) cin >> a[i][j];
        }
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j){
                if(a[i][j] == 'O' && !vst[i][j]){
                    ok = 1;
                    check(i, j);
                    if(ok) loang(i, j);
                }
            }
        }
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j) cout << a[i][j] << ' ';
            cout << '\n';  
        }
        memset(vst, 0, sizeof vst);
    }
}