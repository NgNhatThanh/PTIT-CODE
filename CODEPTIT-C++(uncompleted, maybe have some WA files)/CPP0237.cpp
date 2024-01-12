#include <bits/stdc++.h>
#define ll long long
using namespace std;

int pre[25][25];

int cal(int i1, int j1, int i2, int j2){
    return pre[i2][j2] - pre[i2][j1-1] - pre[i1-1][j2] + pre[i1-1][j1-1]; 
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n] = {};
        char x;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cin >> x;
                if(x == 'X') a[i][j] = 1;
                pre[i+1][j+1] = pre[i][j+1] + pre[i+1][j] - pre[i][j] + a[i][j];
            }
        }
        int res = 0;
        for(int k=n; k>=1; --k){
            for(int i=1; i<=n-k+1; ++i){
                for(int j=1; j<=n-k+1; ++j){
                    if(k <= res) break;
                    int t1 = cal(i, j, i, j+k-1);
                    int t2 = cal(i, j, i+k-1, j);
                    int t3 = cal(i+k-1, j, i+k-1, j+k-1);
                    int t4 = cal(i, j+k-1, i+k-1, j+k-1);   
                    if(t1 == k && t1 == t2 && t1 == t3 && t1 == t4) res = k;
                }
            }
        }
        memset(pre, 0, sizeof(pre));
        cout << res << '\n';
    }
}