#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> res;
int nt[]={2, 3, 5, 7, 13, 17, 19, 31};
// cac so hoan hao dau tien la so tam giac thu 2^p-1, p la so nguyen to

void preCal(){
  for(int &x : nt){
      res.push_back(1ll*pow(2, x)*(pow(2, x)-1)/2);
  }
}

void solve(){
  ll n;
  cin >> n;
  for(ll &x : res){
    if(x==n) {
      cout << 1 << '\n';
      return;
    }
  }
  cout << 0 << '\n';
}

int main() 
{
  preCal();
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}