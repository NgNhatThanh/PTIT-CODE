#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(ll n){
    ll rev = 0;
    ll tmp = n;
    while(tmp){
        rev = rev*10 + tmp%10;
        tmp/=10;
    }
    return rev == n;
}

int main()
{
  int t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    if(check(n)) cout << "YES\n";
    else cout << "NO\n";
  }
} 