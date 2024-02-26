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
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double res = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));;
    cout << setprecision(4) << fixed << res << '\n';
  }
}