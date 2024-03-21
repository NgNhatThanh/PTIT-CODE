#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int check[n + 1] = {};
    int a[k];
    for(int &x : a ){
        cin >> x;
        ++check[x];
    }
    int i = k - 1;
    while(i >= 0 && a[i] == n - k + i + 1) --i;
    if(i < 0) cout << k << '\n';
    else{
        ++a[i++];
        for(; i < k; ++i) a[i] = a[i - 1] + 1;
        int cnt = 0;
        for(int x : a){
            if(check[x]) check[x] = 0;
        }
        for(int x : check) cnt += x;
        cout << cnt << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}