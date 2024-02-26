#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(int n){
    while(n){
        int t = n%10;
        if(t!=8 && t!=0 && t!=6) return 0;
        n/=10;
    }
    return 1;
}

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    if(check(n)) cout << "YES\n";
    else cout << "NO\n";
  }
} 