#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
      int n, m, l;
      cin >> n >> m >> l;
      int a[n+5][m+5];
      ll pre[n+5][m+5] = {};
      for(int i=1; i<=n; ++i){
        for(int j=1; j<=m; ++j){
          cin >> a[i][j];
          pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
      }
      for(int i=l; i<=n; ++i){
        for(int j=l; j<=m; ++j){
            ll sum = pre[i][j] - pre[i-l][j] - pre[i][j-l] + pre[i-l][j-l];
            cout << sum / (l*l)  << ' ';
        }
        cout << '\n';
      }
    }
} 