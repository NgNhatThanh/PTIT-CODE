#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[105][105], res[105][105], check[105][105];

void gan(int i1, int j1, int i2, int j2){
    if(!check[i1][j1]){
        res[i2][j2] = a[i1][j1];
        check[i1][j1] = 1; 
    }
    else res[i2][j2] = a[i2][j2];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j) cin >> a[i][j];
        }
        int right = 0, left = m-1, top = 0, down = n-1;
        int stt = 1;
        int i = -1, j = 0;
        while(right <= left && top <= down){
            if(stt){
                stt = 0;
                for(++j, ++i; j<=left; ++j){
                    gan(i, j-1, i, j);
                }
                --left; --j;
                for(++i; i<=down; ++i){
                    gan(i-1, j, i, j);
                }
                --down; --i;
            }
            else{
                stt = 1;
                for(--j; j>=right; --j){
                    gan(i, j+1, i, j);
                }
                ++right; ++j;
                for(--i; i>=top; --i){
                    gan(i+1, j, i, j);
                }
                ++top; ++i;
            }
        }
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j) cout << res[i][j] << ' ' ;
        }
        cout << '\n';
        memset(check, 0, sizeof(check));
    }
}   