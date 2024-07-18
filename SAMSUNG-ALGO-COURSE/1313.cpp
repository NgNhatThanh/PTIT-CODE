#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[k];
    for(int &x : a) cin >> x;
    int i = k - 1;
    while(i > 0 && a[i] == a[i - 1] + 1) --i;
    if(a[i] != 1) --a[i++];
    for(; i < k; ++i) a[i] = n - k + i + 1;
    for(int x : a) cout << x << ' ';
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