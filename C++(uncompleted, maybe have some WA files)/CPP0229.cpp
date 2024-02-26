#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0; i<n; ++i){
			for(int j=0; j<m; ++j) cin >> a[i][j];
		}
		int i = 0, j = 0, check = 1;
		cout << a[0][0] << ' ';
		while(i<n-1 || j<m-1){
			if(check){
				check = 0;
				if(j<m-1) ++j;
				else if(i<n-1) ++i;
				while(i<n && j>=0){
					cout << a[i][j] << ' ';
					--j; ++i;
				}
				++j; --i;
			}
			else{
				check = 1;
				if(i<n-1) ++i;
				else if(j<m-1) ++j;
				while(i>=0 && j<m){
					cout << a[i][j] << ' ';
					++j; --i;
				}
				++i; --j;
			}
		}
        cout << '\n';
	}
}
