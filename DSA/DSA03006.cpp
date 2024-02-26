#include <bits/stdc++.h>
using namespace std;

int check(int a[], int n){
    vector<int> cop(a, a + n);
    sort(a, a + n);
    for(int i = 0; i < n / 2; ++i){
        if(a[i] != cop[i] && a[i] != cop[n - i - 1]) return 0;
    }
    return 1;
}

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(check(a, n)) cout << "Yes\n";
    else cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}