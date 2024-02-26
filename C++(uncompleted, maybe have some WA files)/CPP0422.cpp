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
    int cnt = 0;
    for(ll &x : a){
      cin >> x;
      if(x) cout << x << ' ';
      else ++cnt;
    }
    while(cnt--) cout << 0 << ' ';
    cout << '\n';
  }
}