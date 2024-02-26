#include <bits/stdc++.h>
using namespace std;

int a[100][100], n, m;
int cnt;

void solve(int i, int j){
    if(i == n - 1 && j == m - 1){
        ++cnt;
        return;
    }
    if(i < n - 1) solve(i + 1, j);
    if(j < m - 1) solve(i, j + 1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j) cin >> a[i][j];
        }
        solve(0, 0);
        cout << cnt << '\n';
        cnt = 0; 
    }
}