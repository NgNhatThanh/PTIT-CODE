#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;

int check(int i, int j){
    return i < n && j < m;
}

void solve(){
    cin >> n >> m;
    int a[n][m], step[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            step[i][j] = INT_MAX;
        }
    }
    queue<pair<int, int>> q;
    q.push({0, 0});
    step[0][0] = 0;
    while(!q.empty()){
        int i = q.front().first, j = q.front().second;
        q.pop();
        if(check(i + a[i][j], j) && step[i + a[i][j]][j] > step[i][j] + 1){
            step[i + a[i][j]][j] = step[i][j] + 1;
            q.push({i + a[i][j], j});
        }
        if(check(i, j + a[i][j]) && step[i][j + a[i][j]] > step[i][j] + 1){
            step[i][j + a[i][j]] = step[i][j] + 1;
            q.push({i, j + a[i][j]});
        }
    }
    if(step[n - 1][m - 1] == INT_MAX) cout << "-1\n";
    else cout << step[n - 1][m - 1] << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}