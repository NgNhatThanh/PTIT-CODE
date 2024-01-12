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
    int n, x;
    cin >> n >> x;
    int a[n];
    int idx = -1;
    for(int i=0; i<n; ++i){
      cin >> a[i];
      if(a[i] == x){
        (idx == -1) ? idx = i+1 : idx = idx;
      }
    }
    cout << idx << '\n';
  }
}