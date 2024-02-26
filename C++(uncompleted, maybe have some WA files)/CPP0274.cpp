#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    map<int, int> mp;
    int x;
    while(n--){
      cin >> x;
      ++mp[x];
    }
    int res = 0;
    for(pair<int, int> x : mp){
      if(x.second > 1) res += x.second;
    }
    cout << res << '\n';
  }
}