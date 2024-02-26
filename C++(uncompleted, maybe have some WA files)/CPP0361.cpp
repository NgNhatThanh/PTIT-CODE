#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
  faster()
  int n;
  cin >> n;
  unordered_map<string, int> mp;
  vector<string> v;
  string s;
  for(int i=1; i<=n; ++i){
    cin >> s;
    v.push_back(s);
    ++mp[s];
  }
  ll res = 0;
  for(string &x : v){
    unordered_map<string, int> vst;
    for(int i=0; i<x.size(); ++i){
      for(int j=1; j<=x.size()-i; ++j){
        string tmp = x.substr(i, j);
        if(!vst[tmp]) res += mp[tmp];
        ++vst[tmp];
      }
    }
    --res;
  }
  cout << res;
} 