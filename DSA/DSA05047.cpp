#include <bits/stdc++.h>
#define ll long long
using namespace std;

// các cấu hình 4 bit thỏa mãn không có 2 bit kề = 1
int masks[] = {0, 1, 2, 4, 5, 8, 9, 10};

void solve(){
    int n;
    cin >> n;
    int a[4][n];
    int ma = INT_MIN;
    for(int i = 0; i < 4; ++i){
        for(int j = 0 ; j < n; ++j){
            cin >> a[i][j];
            ma = max(ma, a[i][j]);
        }
    }
    if(ma < 0) cout << ma << '\n';
    else{
        int dp[n][11];
        for(int mask : masks){
            dp[0][mask] = 0;
            for(int i = 0; i < 4; ++i){
                if(mask & (1 << i)) dp[0][mask] += a[i][0];
            }
        }
        for(int j = 1; j < n; ++j){
            for(int mask : masks){
                dp[j][mask] = 0;
                int sum = 0;
                for(int i = 0; i < 4; ++i){
                    if(mask & (1 << i)) dp[j][mask] += a[i][j];
                }
                sum = dp[j][mask];
                for(int prevmask : masks){
                    if((prevmask & mask) == 0) dp[j][mask] = max({dp[j][mask], dp[j - 1][prevmask] + sum});
                }
            }
        }
        int res = INT_MIN;
        for(int mask : masks) res = max(res, dp[n - 1][mask]);
        cout << res << '\n';
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