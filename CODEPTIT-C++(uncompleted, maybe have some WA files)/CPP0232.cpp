#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[16][16];
int n, m;
int res;

void process(int l, int r, int idx){
    for(int k=l; k<=r; ++k){
        int cnt = 1;
        for(int j=0; j<m; ++j){
            if(j != idx){
                int ok = 1;
                for(int i=k; i<=r; ++i){
                    if(!a[i][j]){
                        ok = 0;
                        break;
                    }
                }
                if(ok) ++cnt;
            }
        }
        res = max(res, cnt*(r-k+1));
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j) cin >> a[i][j];
        }
        for(int j=0; j<m; ++j){ 
            for(int i=0; i<n; ++i){
                if(a[i][j]){
                    int k = i;
                    while(k<n && a[k][j]) ++k;
                    --k;
                    process(i, k, j);
                    i = k + 1;
                }
            }
        }
        cout << res << '\n';
        res = 0;
    }
}   