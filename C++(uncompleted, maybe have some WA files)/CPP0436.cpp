#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		vector<int> v(a, a+n);
		sort(a, a+n);
		for(int x : v){
			int id = upper_bound(a, a+n, x) - a;
			if(id == n) cout << "_ ";
			else cout << a[id] << ' ';
		}
		cout << '\n';
	}
}
