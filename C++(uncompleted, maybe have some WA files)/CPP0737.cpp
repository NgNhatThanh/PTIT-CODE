#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        int pre[n+2] = {};
        for(int i=0; i<n; ++i){
            cin >> a[i];
            pre[i+1] = pre[i] + a[i]; 
        }
        double ans = -100000;
        int l, r;
        for(int i=k; i<=n; ++i){
            if(1.0*(pre[i] - pre[i-k])/k > ans){
                ans = 1.0*(pre[i] - pre[i-k])/k;
                l = i-k+1; r = i;
            }
        }
        for(int i=l; i<=r; ++i) cout << a[i-1] << ' ';
        cout << '\n';
    }
}
