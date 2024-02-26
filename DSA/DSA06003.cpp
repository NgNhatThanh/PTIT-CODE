#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int res = 0;
    for(int i = 0; i < n; ++i){
        int tmp = i;
        for(int j = i + 1; j < n; ++j){
            if(a[j] < a[tmp]) tmp = j;
        }
        if(tmp != i) ++res;
        swap(a[tmp], a[i]);
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