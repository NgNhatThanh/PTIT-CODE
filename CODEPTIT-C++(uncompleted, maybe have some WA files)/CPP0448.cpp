#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, x;
    cin >> n >> x;
    int a[n];
    map<int, int> mp;
    for(int &x : a){
      cin >> x;
      ++mp[x];
    }
    (mp[x] == 0) ? cout << -1 << '\n' : cout << mp[x] << '\n';
  }
}