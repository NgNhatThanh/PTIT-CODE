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

int check(string s){
  return s.size()>=2 && s.back() == '6' && s[s.size()-2] == '8';
}

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    cout << check(s) << '\n';
  }
}