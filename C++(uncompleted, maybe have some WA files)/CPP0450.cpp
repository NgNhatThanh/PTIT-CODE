#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    int ok = 0;
    for (int &x : a)
    {
        cin >> x;
        ++mp[x];
        if (mp[x] > 1 && !ok)
        {
            ok = 1;
            cout << x << '\n';
        }
    }
    if(!ok) cout << -1 << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}