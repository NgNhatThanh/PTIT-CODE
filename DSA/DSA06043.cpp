#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int pre[n] = {};
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(!i) pre[i] = a[i];
        else pre[i] = pre[i - 1] + a[i];
    }
    for(int i = 1; i < n - 1; ++i){
        if(pre[i - 1] == pre[n - 1] - pre[i]){
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << "-1\n";
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}