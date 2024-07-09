#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, part, remain, ok;
int s[22];

void Try(int *a, int i){
    if(ok) return;
    if(i == n){
        if(!remain) ok = 1;
        return;
    }
    if(n - i < remain) return;
    for(int j = 1; j <= k; ++j){
        if(s[j] + a[i] <= part){
            if(a[i] && s[j] + a[i] == part) --remain;
            s[j] += a[i];
            Try(a, i + 1);
            s[j] -= a[i];
        }
    }
}

void solve(){
    int sum = 0;
    cin >> n >> k;
    remain = k;
    int a[n];
    for(int &x : a){
        cin >> x;
        sum += x;
    }
    if(sum % k) cout << "0\n";
    else{
        part = sum / k;
        Try(a, 0);
        cout << ok << '\n';
        memset(s, 0, sizeof s);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}