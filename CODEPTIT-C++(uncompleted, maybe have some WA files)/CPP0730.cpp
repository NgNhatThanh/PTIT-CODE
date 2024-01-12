#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        ll tmp = 0;
        ll res = LLONG_MIN;
        for(int i=0; i<n; ++i){
            cin >> a[i];
            tmp = max(a[i], tmp + a[i]);
            res = max(res, tmp);
        }
        cout << res << '\n';
    }
}
