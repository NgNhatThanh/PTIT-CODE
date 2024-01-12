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
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int res = INT_MAX;
    for(int i=0; i<n; ++i){
      for(int j=i+1; j<n; ++j){
        int t = abs(a[j] + a[i]);
        if(t < abs(res)) res = a[i] + a[j];
      }
    }
    cout << res << '\n';    
  }
}