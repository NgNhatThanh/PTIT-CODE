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

int check(int n){
  int le=0, chan=0;
  while(n){
    le += ((n%10)%2);
    chan += ((n%10)%2==0);
    n /= 10;
  }
  return chan == le;
}

int main(){
  faster()
  int n;
  cin >> n;
  int cnt = 0;
  for(int i=pow(10, n-1); i<pow(10, n); ++i){
    if(check(i)){
      cout << i;
      ++cnt;
      if(cnt % 10 == 0){
        cout << '\n';
        cnt = 0;
      }
      else cout << ' ';
    }
  }
}