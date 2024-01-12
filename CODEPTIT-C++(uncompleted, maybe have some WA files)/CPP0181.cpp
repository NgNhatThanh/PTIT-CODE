#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
  if(!b) return a;
  return gcd(b, a%b);
}

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while(t--){
    ll x, a, b;
    cin >> x >> a >> b;
    ll res = gcd(a, b);
    while(res--) cout << x;
    cout << '\n';
  }
}