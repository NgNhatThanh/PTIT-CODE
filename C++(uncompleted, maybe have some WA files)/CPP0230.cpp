#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;  
    cin >> n;
    int a[n][n];
    int res = 0;
    for(int i=0; i<n; ++i){
      int cnt1 = 0, cnt0 = 0;
      for(int j=0; j<3; ++j){
        cin >> a[i][j];
        cnt1 += a[i][j];
        cnt0 += !a[i][j];
      }
      res += (cnt1 > cnt0);
    }
    cout << res;
}