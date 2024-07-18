#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) a[i] = n - i;
    do{
        for(int x : a) cout << x;
        cout << ' ';
    }
    while(prev_permutation(a, a + n));
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}