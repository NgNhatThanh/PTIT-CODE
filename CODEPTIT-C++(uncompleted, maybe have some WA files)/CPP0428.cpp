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
    int n, m;
    cin >> n >> m;
    int a[n+m];
    for(int &x : a) cin >> x;
    sort(a, a+n+m);
    for(int x : a) cout << x << ' ';
    cout << '\n';
  }
}