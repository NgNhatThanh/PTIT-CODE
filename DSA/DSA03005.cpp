#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n];
    for(int &x : a){
        cin >> x;
        sum += x;
    }
    sort(a, a + n);
    int s1 = 0, s2 = 0;
    for(int i = 0; i < k; ++i){
        s1 += a[i];
        s2 += a[n - i - 1];
    }
    int res = max(abs(2 * s1 - sum), abs(2 * s2 - sum));
    cout << res << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}