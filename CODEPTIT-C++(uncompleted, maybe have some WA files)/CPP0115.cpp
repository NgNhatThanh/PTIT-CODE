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

void pt(int n){
  for(int i=2; i<=sqrt(n); ++i){
    if(n%i==0){
      int cnt = 0;
      while(n%i==0){
        ++cnt;
        n/=i;
      }
      cout << i << ' ' << cnt << ' ';
    }
  }
  if(n>1) cout << n << ' ' << 1;
  cout << '\n';
}

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    pt(n);
  }
}