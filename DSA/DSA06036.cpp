#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            int idx = lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a;
            if(idx < n && a[idx] == k - a[i] - a[j]){
                cout << "YES\n";
                return;
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