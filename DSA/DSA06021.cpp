#include <bits/stdc++.h>
using namespace std;

int bin_search(int a[], int l, int r, int x){
    if(r < l) return 0;
    int mid = (l + r) / 2;
    if(a[mid] == x) return mid;
    else if(a[mid] < x) return bin_search(a, mid + 1, r, x);
    return bin_search(a, l, mid - 1, x);
}

void solve(){
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    cin >> a[1];
    int cut = n;
    for(int i = 2; i <= n; ++i){
        cin >> a[i];
        if(a[i] < a[i - 1]) cut = i - 1;
    }
    cout << bin_search(a, 1, cut, x) + bin_search(a, cut + 1, n, x) << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}