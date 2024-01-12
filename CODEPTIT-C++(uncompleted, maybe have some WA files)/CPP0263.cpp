#include <iostream>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	int a[n+1][n+1];
	int cc[n+1][n+1] = {}, cp[n+1][n+1] = {};
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			cin >> a[i][j];
			cc[i][j] = cc[i-1][j-1] + a[i][j];
		}
	}
	for(int i=1; i<=n; ++i){
		for(int j=n; j>=1; --j) cp[i][j] = cp[i-1][j+1] + a[i][j];
	}
	int res = -2e9;
	for(int sz=2; sz<=n; ++sz){
		for(int i=sz; i<=n; ++i){
			for(int j=sz; j<=n; ++j){
				int chinh = cc[i][j] - cc[i-sz][j-sz];
				int phu = cp[i][j-sz+1] - cp[i-sz][j+1];
				res = max(res, chinh - phu);
			}
		}
	}
	cout << res << '\n';
}	
