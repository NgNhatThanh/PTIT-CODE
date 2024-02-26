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
    int a[n];
    map<int, int> mp;
    int mi = 1e9, ma = 0;
    for(int &x : a){
        cin >> x;
        ++mp[x];
        mi = min(mi, x);
        ma = max(ma, x);
    }
    int sl = ma - mi + 1;
    cout << sl - mp.size() << '\n';
  }
}