#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[1000005];

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a, a+n);
    for(int i=0; i<n; ++i) cout << a[i] << ' ';
    cout << '\n'; 
  }
} 