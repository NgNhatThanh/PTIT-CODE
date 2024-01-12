#include <bits/stdc++.h>
using namespace std;

int a[45][45];
int n, sl;

void in(int i, int j, int check){
    int len = 2, cnt = 1, tmp;
    cout << a[i][j] << ' ';
    while(1){
        if(check){
            check = 0;
            tmp = i + len;
            for(++i; i<=min(tmp, 4*n-1); ++i){
                cout << a[i][j] << ' ';
                ++cnt;
            }
            if(cnt >= sl) break;
            --i;
            tmp = j - len;
            for(--j; j>=max(0, tmp); --j){
                cout << a[i][j] << ' ';
                ++cnt;
            }
            ++j;
            len += 2;
        }
        else{
            check = 1;
            tmp = i - len;
            for(--i; i>=max(0, tmp) ;--i){
                cout << a[i][j] << ' ';
                ++cnt;
            }
            if(cnt >= sl) break;
            ++i;
            tmp = j + len;
            for(++j; j<=min(4*n-1, tmp); ++j){
                cout << a[i][j] << ' ';
                ++cnt;
            }
            --j;
            len += 2;
        }
    }
    cout << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        sl = 8*n*n;
        int k = 1;
        for(int i=0; i<4*n; ++i){
            for(int j=0; j<4*n; ++j) a[i][j] = k++;
        }
        in(2*n, 2*n-1, 0);
        in(2*n-1, 2*n, 1);
    }
}