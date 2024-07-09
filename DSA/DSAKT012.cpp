#include <bits/stdc++.h>
#define ll long long
using namespace std;

int res, n, s;

void Try(int *a, int i, int cnt = 0, int sum = 0){
    if(sum == s){
        res = cnt;
        return;
    }
    if(i == n || cnt >= res || cnt + (s - sum) / a[i] >= res) return;
    if(a[i] <= s) Try(a, i + 1, cnt + 1, sum + a[i]);
    Try(a, i + 1, cnt, sum);
}

void solve(){
    cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    res = n;
    Try(a, 0);
    if(res == n) cout << "-1\n";
    else cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}