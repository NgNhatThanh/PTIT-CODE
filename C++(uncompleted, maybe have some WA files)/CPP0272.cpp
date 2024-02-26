#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9+7;

ll Pow(ll a, ll b){
  if(!b) return 1;
  ll res = Pow(a, b/2);
  (res *= res) %= mod;
  if(b&1) (res *= a) %= mod;
  return res;
}

ll gcd(ll a, int b){
    if(!b) return a;
    return gcd(b, a%b);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      int a[n];
      ll g = 0;
      ll mul = 1;
      for(int &x : a){
        cin >> x;
        if(!g) g = x;
        mul = (mul * x) % mod;
        g = gcd(g, x);
      }
      //cout << g << ' ' << mul ;
      cout << Pow(mul, g) << '\n';
    }
} 