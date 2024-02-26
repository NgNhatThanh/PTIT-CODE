#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

signed main(){
    int t;
	cin >> t;
	while(t--){
		int n, m, p;
        cin >> n >> m >> p;
        ll a[n], b[m], c[p];
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;
        for(ll &x : c) cin >> x;
        int i = 0, j = 0, k = 0;
        int check = 0;
        while(i<n && j<m && k<p){
            if(a[i] == b[j] && a[i] == c[k]){
                cout << a[i] << ' ';
                check = 1;
                ++i; ++j; ++k;
            }
            else if(a[i] < b[j]) ++i;
            else if(b[j] < c[k]) ++j;
            else ++k;
        }
        if(!check) cout << -1;
        cout << '\n';
	}
}
