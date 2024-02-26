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

int check(string s, int i){
  return i<=s.size()-2 && s[i]=='0' && s[i+1]=='8' && s[i+2]=='4';
}

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ++i){
      if(check(s, i)) i+=2;
      else cout << s[i];
    }
    cout << '\n';
  }
}