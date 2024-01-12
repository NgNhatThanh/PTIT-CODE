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
      for(int &x : a) cin >> x;
      int res = *max_element(a, a+n);
      cout << res << '\n';
    }
} 