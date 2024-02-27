#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    sort(a, a + n);
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            ll sum = a[i] * a[i] + a[j] * a[j];
            if(sqrt(sum) == (int)sqrt(sum)){
                int idx = lower_bound(a + j + 1, a + n, sqrt(sum)) - a;
                if(idx < n && a[idx] == sqrt(sum)){
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}