#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

int Pow(int n, int k){
    if(!k) return 1;
    ll res = Pow(n, k / 2);
    (res *= res) %= mod;
    if(k % 2) (res *= n) %= mod;
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << Pow(n, k) << '\n';
    }
}