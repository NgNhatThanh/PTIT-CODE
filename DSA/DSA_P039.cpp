#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dp[1 << 20];

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j) cin >> a[i][j];
        }
        for(int i = 0; i < (1 << n); ++i){
            int row = -1;
            for(int j = 0; j < n; ++j) row += i >> j & 1;
            for(int j = 0; j < n; ++j){
                if(i >> j & 1){
                    int mask = i ^ (1 << j);
                dp[i] = max(dp[i], dp[mask] + a[row][j]);
                }
            }
        }
        cout << dp[(1 << n) - 1] << '\n';
        memset(dp, 0, sizeof(dp));
    }
}