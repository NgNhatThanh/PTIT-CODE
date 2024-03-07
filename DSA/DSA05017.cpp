#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int tang[n], giam[n];
    for(int i = 0; i < n; ++i){
        tang[i] = a[i];
        for(int j = 0; j < i; ++j){
            if(a[j] < a[i]) tang[i] = max(tang[i], tang[j] + a[i]);
        }
    }
    for(int i = n - 1; i >= 0; --i){
        giam[i] = a[i];
        for(int j = n - 1; j > i; --j){
            if(a[j] < a[i]) giam[i] = max(giam[i], giam[j] + a[i]);
        }
    }
    int res = 0;
    for(int i = 0; i < n; ++i) res = max(res, tang[i] + giam[i] - a[i]);
    cout << res << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}