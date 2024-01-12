#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int res = -1;
        for(int &x : a) cin >> x;
        for(int i=0; i<n; ++i){
            for(int j=i+1; j<n; ++j){
                res = max(res, a[j] - a[i]);
            }
        }
        cout << res << '\n';
    }
}   