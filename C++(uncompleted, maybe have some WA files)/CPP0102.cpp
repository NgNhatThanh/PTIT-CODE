#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    char n;
    cin >> n;
    if(n <= 'Z') n += 32;
    else n -= 32;
    cout << n << '\n';
  }
} 