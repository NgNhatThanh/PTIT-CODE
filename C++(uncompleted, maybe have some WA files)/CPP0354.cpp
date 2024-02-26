#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    char last = s[0];
    int cnt = 1;
    for(int i=1; i<s.size(); ++i){
      if(s[i] != s[i-1]){
        cout << last << cnt;
        last = s[i];
        cnt = 1;
      }
      else ++cnt;
    }
    cout << last << cnt << '\n';
  }
}