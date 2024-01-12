#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    int a[n+5];
    deque<int> q;
    for(int i=1; i<=n; ++i){
      cin >> a[i];
      while(!q.empty() && q.front() <= i-k) q.pop_front();
      while(!q.empty() && a[i] > a[q.back()]) q.pop_back();
      q.push_back(i);
      if(i >= k) cout << a[q.front()] << ' ';
    }
    cout << '\n';
  }
}