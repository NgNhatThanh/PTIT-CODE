#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int mi = INT_MAX, ma = INT_MIN;
    for(int &x : a){
        cin >> x;
        mi = min(mi, x);
        ma = max(ma, x);
    }
    for(int i = mi; i >= 1; --i){
        int ok = 1, sum = 0;
        for(int x : a){
            if(x / i == x / (i + 1)){
                ok = 0;
                break;
            }
        }
        if(ok){
            for(int x : a) sum += x / (i + 1) + 1;
            cout << sum;
            return;
        }
    }
}

int main(){
    faster()
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}