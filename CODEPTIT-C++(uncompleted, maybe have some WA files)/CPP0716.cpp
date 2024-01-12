#include <bits/stdc++.h>
using namespace std;

int a[25][25], n, k, res;

void solve(int i, int j, int sum = a[0][0]){
    if(sum > k) return;
    if(i == n-1 && i == j){
        if(sum == k) ++res;
        return;
    }
    if(i<n-1) solve(i+1, j, sum + a[i+1][j]);
    if(j<n-1) solve(i, j+1, sum + a[i][j+1]);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j) cin >> a[i][j];
        }
        solve(0, 0);
        cout << res << '\n';
        res = 0;
    }
}
