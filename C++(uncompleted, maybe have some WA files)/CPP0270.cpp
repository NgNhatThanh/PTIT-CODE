#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[300][300];
int ker[3][3];

int cal(int i, int j){
    ll res = 0;
    for(int x=i; x<i+3; ++x){
        for(int y=j; y<j+3; ++y) res += a[x][y] * ker[x-i][y-j];
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j) cin >> a[i][j];
        }
        ll res = 0;
        for(int i=0; i<3; ++i){
            for(int j=0; j<3; ++j) cin >> ker[i][j];
        }
        for(int i=0; i<=n-3; ++i){
            for(int j=0; j<=m-3; ++j){
                res += cal(i, j);
            }
        }
        cout << res << '\n';
    }
}