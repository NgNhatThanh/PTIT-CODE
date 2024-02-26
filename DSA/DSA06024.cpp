#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int cnt = 1;
    for(int i = 0; i < n - 1; ++i){
        int idx = i;
        for(int j = i + 1; j < n; ++j){
            if(a[j] < a[idx]) idx = j;
        }
        swap(a[i], a[idx]);
        cout << "Buoc " << cnt++ << ": ";
        for(int x : a) cout << x << ' ';
        cout << '\n';
    }
}

int main(){ 
    int t = 1;
    // cin >> t;
    while(t--){
        solve();        
    }
}