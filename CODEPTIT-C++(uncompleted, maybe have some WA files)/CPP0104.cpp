#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int n;
  cin >> n;
  ll sum = 0;
  ll gt = 1;
  for(int i=1; i<=n; ++i){
    gt *= 1ll*i;
    sum += gt;
  }
  cout << sum;
} 