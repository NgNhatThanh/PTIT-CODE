#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define pli pair<ll, int>
#define fi first
#define se second
#define maxn 100005

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n-1];
    unordered_map<int, int> mp;
    for(int &x : a){
      cin >> x;
      ++mp[x];
    }
    int k = 1;
    while(1){
      if(!mp[k]){
        cout << k << '\n';
        break;
      }
      ++k;
    }
  }
}