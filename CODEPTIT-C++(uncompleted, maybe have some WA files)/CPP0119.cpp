#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int res = 0;
    for(int i=1; i<=sqrt(n); ++i){
      if(n%i==0){
        res += (i%2==0);
        if(i != n/i) res += ((n/i)%2==0);
      }
    }
    cout << res << '\n';
  }
}