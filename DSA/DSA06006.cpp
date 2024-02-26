#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n], pre[3] = {};
    for(int &x : a){
        cin >> x;
        ++pre[x];
    }
    for(int i = 0; i < 3; ++i){
        while(pre[i]--) cout << i << ' ';
    }
    cout << '\n';
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}