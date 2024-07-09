#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, part, remain, res;

void Try(int *a, int i, int sum = 0){
    if(i == n){
        if(!remain) ++res;
        return;
    }
    if(n - i < remain) return;
    if(sum + a[i] == part){
        --remain;
        Try(a, i + 1, 0);
        ++remain;
    }
    if(remain) Try(a, i + 1, sum + a[i]);
}

void solve(){
    cin >> n >> k;
    remain = k;
    int a[n];
    int sum = 0;
    for(int &x : a){
        cin >> x;
        sum += x;
    }
    if(sum % k) cout << "0";
    else{
        part = sum / k;
        Try(a, 0);
        cout << res;
    }  
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}