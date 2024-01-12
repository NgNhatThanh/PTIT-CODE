#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        ll res = LLONG_MIN;
        for(int i=0; i<n; ++i){
            ll tmp = 1;
            for(int j=i; j<n; ++j){
                tmp *= a[j];
                res = max(res, tmp);
            }
        }
        cout << res << '\n';
    }
}
