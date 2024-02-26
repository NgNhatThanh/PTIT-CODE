#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll merge(ll a[], int l, int m, int r){
    vector<ll> left(a + l, a + m + 1);
    vector<ll> right(a + m + 1, a + r + 1);
    int i = 0, j = 0, k = l;
    ll res = 0;
    while(i < left.size() && j < right.size()){
        if(left[i] > right[j]){
            res += left.size() - i;
            a[k++] = right[j++];
        }
        else a[k++] = left[i++];
    }
    while(i < left.size()) a[k++] = left[i++];
    while(j < right.size()) a[k++] = right[j++];
    return res;
}

ll Count(ll a[], int l, int r){
    ll res = 0;
    if(l >= r) return 0;
    int mid = (l + r) / 2;
    res += Count(a, l, mid);
    res += Count(a, mid + 1, r);
    res += merge(a, l, mid, r);
    return res;
}

void solve(){
    int n;
    cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    cout << Count(a, 0, n - 1) << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}