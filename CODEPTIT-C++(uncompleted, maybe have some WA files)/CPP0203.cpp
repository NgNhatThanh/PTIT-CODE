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
      int check[1000005] = {};
      for(int &x : a){
        cin >> x;
        if(x>0) check[x] = 1;
      }
      int res = 1;
      while(check[res]){
        ++res;
      }
      cout << res << '\n';
    }
} 