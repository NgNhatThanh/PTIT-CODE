#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
      int n, k;
      cin >> n >> k;
      int a[n];
      for(int &x : a) cin >> x;
      sort(a, a+n);
      cout << a[k-1] << '\n';
    }
} 