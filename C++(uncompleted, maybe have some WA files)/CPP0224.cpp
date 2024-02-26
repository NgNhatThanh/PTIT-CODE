#include <bits/stdc++.h>
using namespace std;

int check[105][105], a[105][105], n, m;
int dx[] = {0, 0, -1, -1, -1, 1, 1, 1};
int dy[] = {-1, 1, 0, -1, 1, 0, -1, 1};

int kt(int i, int j){
    return i>=0 && j>=0 && i<n && j<m && a[i][j] && !check[i][j];
}

void loang(int i, int j){
    for(int k=0; k<8; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if(kt(x, y)){
            check[x][y] = 1;
            loang(x, y);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                cin >> a[i][j];
            }
        }
        int res = 0;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(a[i][j] && !check[i][j]){
                    ++res;
                    loang(i, j);
                }
            }
        }
        cout << res << '\n';
        memset(check, 0, sizeof check);
    }
}   