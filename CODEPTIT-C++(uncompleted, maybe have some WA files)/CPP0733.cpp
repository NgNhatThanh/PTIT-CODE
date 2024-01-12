#include <bits/stdc++.h>
using namespace std;

int a[1005][1005], dp[1005][1005], vst[1005][1005];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m, x, y, z, t;

int check(int i, int j){
  return i>=0 && j>=0 && i<n && j<m && a[i][j] && !vst[i][j];
}

void solve(int i, int j, int cnt){
  dp[i][j] = cnt;
  if(cnt >= dp[z][t]) return;
  for(int k=0; k<4; ++k){
    int x1 = i + dx[k];
    int y1 = j + dy[k];
    if(check(x1, y1) && cnt + 1 < dp[x1][y1] && cnt + 1 < dp[z][t]){
        // vst[x1][y1] = 1;
        solve(x1, y1, cnt + 1);
        // vst[x1][y1] = 0;
    };
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while(T--){
    cin >> n >> m >> x >> y >> z >> t;
    for(int i=0; i<n; ++i){
      for(int j=0; j<m; ++j){
        cin >> a[i][j];
        dp[i][j] = INT_MAX;
        vst[i][j] = 0;  
      }
    }
    dp[x][y] = 0;
    vst[x][y] = 1;
    solve(x, y, 0);
    if(dp[z][t] == INT_MAX) cout << "-1\n";
    else cout << dp[z][t] << '\n';
  }
} 