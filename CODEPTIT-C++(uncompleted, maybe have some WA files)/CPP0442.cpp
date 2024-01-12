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

int binary_Search(int *a, int x, int n){
  int l = 0, r = n-1;
  while(l <= r){
    int mid = (l+r)/2;
    if(a[mid] < x) l = mid + 1;
    else if(a[mid] > x) r = mid - 1;
    else return 1;
  }
  return -1;
}

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a, a+n);
    cout << binary_Search(a, x, n) << '\n';
  }
}