#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n+2];
        for(int i=1; i<=n; ++i) cin >> a[i];
        a[0] = a[1]; a[n+1] = a[n];
        vector<ll> v(a, a+n+2);
        for(int i=1; i<=n; ++i){
            v[i] = a[i-1] * a[i+1];
            cout << v[i] << ' '; 
        }
        cout << '\n';
    }
}