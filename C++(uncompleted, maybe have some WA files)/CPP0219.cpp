#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
      int n, m;
      cin >> n >> m;
      int a[n][m];
      int row[n]={}, col[m]={};
      for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
          cin >> a[i][j];
          row[i] = max(row[i], a[i][j]);
          col[j] = max(col[j], a[i][j]);
        }
      }
      for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
          a[i][j] = max(row[i], col[j]);
          cout << a[i][j] << ' ';
        }
        cout << '\n';
      }
    }
} 