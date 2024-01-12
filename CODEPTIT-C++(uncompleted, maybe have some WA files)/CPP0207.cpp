#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
      int n, d;
      cin >> n >> d;
      int a[n];
      for(int i=0; i<n; ++i){
        cin >> a[i];
        if(i >= d) cout << a[i] << ' ';
      }
      for(int i=0; i<d; ++i) cout << a[i] << ' ';
      cout << '\n';
    }
} 