#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int res = 0, sum = 0;
    for(int &x : a){
        cin >> x;
        sum += x;
        if(sum < 0) sum = 0;
        res = max(res, sum);
    }
    cout << res << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}