#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int i = n - 2;
    while(i >= 0 && a[i] > a[i + 1]) --i;
    if(i >= 0){
        int j = i + 1;
        while(j < n && a[j] > a[i]) ++j;
        --j;
        swap(a[j], a[i]);    
    }
    reverse(a + i + 1, a + n);
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