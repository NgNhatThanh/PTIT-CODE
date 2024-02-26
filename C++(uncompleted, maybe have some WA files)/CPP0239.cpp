#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m, rankk;
double a[20][20];

void doiHang(int i, int j, int col){
    for(int k=0; k<m; ++k) swap(a[i][k], a[j][k]);
}

void solve(){
    int i = 0;
    while(i < rankk){
        if(a[i][i]){
            for(int k=0; k<n; ++k){
                if(k != i){
                    double tmp = a[k][i]/a[i][i];
                    for(int j=0; j<m; ++j) a[k][j] -= a[i][j]*tmp;
                }
            }
        } 
        else{
            int tmp = i + 1;
            while(tmp < n && !a[tmp][i]) ++tmp;
            if(tmp < n) doiHang(i, tmp, rankk);
            else{
                --rankk;
                for(int j=0; j<m; ++j) a[j][i] = a[j][rankk];
            }
            --i;
        }
        ++i;
    }
}

int main(){
    int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(n >= m) cin >> a[i][j];
                else cin >> a[j][i];
            }
        } 
        if(n < m) swap(n, m);
        rankk = m;
        solve();
        cout << rankk << '\n';
	}
}