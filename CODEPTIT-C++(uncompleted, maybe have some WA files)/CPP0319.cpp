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

void inmin(int m, int s){
    vector<int> res;
    --m;
    while(m){
        int t = min(9, s-1);
        s -= t;
        res.pb(t);
        m--; 
    }
    res.pb(s);
    reverse(begin(res), end(res));
    for(int x : res) cout << x;
}

void inmax(int m, int s){
    while(m--){
        int t = min(9, s);
        cout << t;
        s -= t;
    }
}

int main(){
  faster()
  int m, s;
  cin >> m >> s;
  if(s > 9*m || !s) cout << "-1 -1";
  else{
    inmin(m, s);
    cout << ' ';
    inmax(m, s);
  }
}