#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

ll merge(int a[], int l, int m, int r){
    vector<int> v;
    ll res = 0;
    int i = l, j = m + 1;
    while(i <= m && j <= r){
        if(a[i] > a[j]){
            res += m - i + 1;
            v.push_back(a[j++]);
        }
        else v.push_back(a[i++]);
    }
    while(i <= m) v.push_back(a[i++]);
    while(j <= r) v.push_back(a[j++]);
    for(int i = l; i <= r; ++i) a[i] = v[i - l];
    return res;
}

ll count_inversion(int a[], int l, int r){
    if(l >= r) return 0;
    int mid = (l + r) / 2;
    ll t1 = count_inversion(a, l, mid);
    ll t2 = count_inversion(a, mid + 1, r);
    ll t3 = merge(a, l, mid, r);
    return t1 + t2 + t3;
}

void solve(){
    int n;
    cin >> n;
    int a[n + 1];
    int chan[n];
    int idx = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] % 2 == 0) chan[idx++] = a[i];
    }
    ll res = count_inversion(chan, 0, idx - 1);
    a[n] = 1;
    int cnt = 0;
    for(int i = 1; i <= n; ++i){
        if(a[i - 1] % 2 == 0){
            if(a[i] % 2 == 0) ++cnt;
            else{
                res -= count_inversion(a, i - cnt - 1, i - 1);
                cnt = 0;
            }
        }
    }
    cout << res;
}

int main(){
    faster()
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}