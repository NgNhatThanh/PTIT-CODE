#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> res;
int n, x, ok;

void Try(int *a, int i, int sum = 0){
    if(sum == x){
        ok = 1;
        cout << '[';
        for(int i = 0; i < res.size() - 1; ++i) cout << res[i] << ' ';
        cout << res.back() << ']';
        return;
    }
    for(int j = i; j < n; ++j){
        if(sum + a[j] <= x){
            res.push_back(a[j]);
            Try(a, j, sum + a[j]);
            res.pop_back();
        }
    }
}

void solve(){
    cin >> n >> x;
    int a[n];
    for(int &k : a) cin >> k;
    sort(a, a + n);
    Try(a, 0);
    if(!ok) cout << -1;
    cout << '\n';
    ok = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}