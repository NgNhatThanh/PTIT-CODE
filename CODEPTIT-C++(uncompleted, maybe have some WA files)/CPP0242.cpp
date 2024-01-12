#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n], prea[n+1] = {}, preb[n+1] = {};
        for(int i=0; i<n; ++i){
            cin >> a[i];
            prea[i+1] = prea[i] + a[i];
        } 
        for(int i=0; i<n; ++i){
            cin >> b[i];
            preb[i+1] = preb[i] + b[i];
        }
        int res = 0;
        for(int i=1; i<=n; ++i){
            for(int j=i; j<=n; ++j){
                if(prea[j] - prea[i-1] == preb[j] - preb[i-1]) res = max(res, j-i+1);
            }
        }
        cout << res << '\n';
    }
}   