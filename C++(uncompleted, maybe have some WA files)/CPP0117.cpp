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

void pt(string s){
  while(s.size()>1){
    int sum = 0;
    for(char x : s) sum += (x-'0');
    s = to_string(sum);
  }
  cout << s << '\n';
}

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    pt(s);
  }
}