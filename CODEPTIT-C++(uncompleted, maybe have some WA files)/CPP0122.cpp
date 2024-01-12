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

ll ans[10005];

ll gcd(ll a, ll b){
  if(!b) return a;
  return gcd(b, a%b);
}

void precal(){
  ans[1] = 1;
  for(int i=2; i<=1000; ++i){
    ans[i] = 1ll*i*ans[i-1]/gcd(i, ans[i-1]);
  }
}

int main(){
  faster()
  precal();
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << ans[n] << '\n';
  }
}