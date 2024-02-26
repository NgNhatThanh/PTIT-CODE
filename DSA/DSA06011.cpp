#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int res = INT_MAX;
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            int tmp = a[i] + a[j];
            if(abs(tmp) < abs(res)) res = tmp;
        }
    }
    cout << res << '\n';
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}