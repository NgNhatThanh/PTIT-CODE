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

int check(ll n){
    int tmp = n%10 + 1;
    while(n){
        if(abs(n%10 - tmp)!=1) return 0;
        tmp = n%10;
        n/=10;
    }
    return 1;
} 

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    ll s;
    cin >> s;
    check(s) ? cout << "YES\n": cout << "NO\n";
  }
}