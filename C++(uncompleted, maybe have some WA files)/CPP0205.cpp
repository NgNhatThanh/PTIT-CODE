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
      int a[n];
      cin >> a[0];
      int res = a[0];
      for(int i=1; i<n; ++i){
        cin >> a[i];
        if(a[i] < a[i-1]) res = max(res, a[i-1]);
      }
      cout << res << '\n';
    }
} 