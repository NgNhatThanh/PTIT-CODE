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

int gcd(int a, int b){
  if(!b) return a;
  return gcd(b, a%b);
}

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    int a, b;
    cin >> a >> b;
    cout << 1ll*a*b/gcd(a, b) << ' ' << gcd(a, b) << '\n';
  }
}