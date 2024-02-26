#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int dp[n];
    dp[0] = 0;
    for(int i=1; i<n; ++i){
      dp[i] = INT_MAX;
      for(int j=0; j<i; ++j){
        if(j + a[j] >= i) dp[i] = min(dp[i], dp[j] + 1);
      }
    }
    if(dp[n-1] == INT_MAX) cout << -1 << '\n';
    else cout << dp[n-1] << '\n';
  }
} 