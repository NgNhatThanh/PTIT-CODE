#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; ++i){
      for(int j=0; j<m; ++j) cin >> a[i][j];
    }
    int top = 1, down = n-1, left = 0, right = m-1;
    int check = 1;
    int i = 0, j = 0;
    int cnt = 0;
    vector<int> res;
    while(res.size() < m*n){
      if(check){
        check = 0;
        for(; j<=right; ++j) res.push_back(a[i][j]);
        --j;
        ++i;
        --right;
        for(; i<=down; ++i) res.push_back(a[i][j]);
        --i;
        --j;
        --down;
      }
      else{
        check = 1;
        for(; j>=left; --j) res.push_back(a[i][j]);
        ++j;
        --i;
        ++left;
        for(; i>=top; --i) res.push_back(a[i][j]);
        ++i;
        ++j;
        ++top;
      }
    }
    for(int i=res.size()-1; i>=0; --i) cout << res[i] << ' ';
    cout << '\n';
  }
}