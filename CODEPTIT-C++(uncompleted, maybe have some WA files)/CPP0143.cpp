#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fib[93];

void cal(){
  fib[1] = 1;
  for(int i=2; i<=92; ++i) fib[i] = fib[i-1] + fib[i-2];
}

int main()
{
    cal();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fib[n] << '\n';
    }
}