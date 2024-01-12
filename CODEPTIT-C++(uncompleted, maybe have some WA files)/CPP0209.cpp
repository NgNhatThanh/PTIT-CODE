#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
      int n, q;
      cin >> n >> q;
      int a[n+5];
      int pre[n+5];
      pre[0] = 0;
      for(int i=1; i<=n; ++i){
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
      }
      int l, r;
      while(q--){
        cin >> l >> r;
        cout << pre[r] - pre[l-1] << '\n';
      }
    }
} 