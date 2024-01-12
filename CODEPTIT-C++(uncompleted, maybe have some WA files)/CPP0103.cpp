#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int n;
  cin >> n;
  double sum = 0;
  for(int i=1; i<=n; ++i) sum += 1.0/i;
  cout << setprecision(4) << fixed << sum;
} 