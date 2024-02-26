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
    ll a[n];
    map<ll, int> mp;
    for(ll &x : a){
      cin >> x;
      ++mp[x];
    }
    for(int i=0; i<n; ++i){
      if(mp[i]){
        cout << i << ' ' ;
        --mp[i];
      }
      else cout << -1 << ' ';
    }
    cout << '\n';
  }
}