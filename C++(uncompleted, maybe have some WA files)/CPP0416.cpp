#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    int cnt = 0;
    for(int i=0; i<n; ++i){
      for(int j=i+1; j<n; ++j){
        if(a[i] + a[j] == k) ++cnt;
      }
    }
    cout << cnt << '\n';
  }
} 