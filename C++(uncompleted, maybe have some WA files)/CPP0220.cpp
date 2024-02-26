#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      int a[n][n];
      for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
          cin >> a[i][j];
          if(!i || !j || i == n-1 || j == n-1) cout << a[i][j] << ' ';
          else cout << "  ";
        }
        cout << '\n';
      }
    }
} 