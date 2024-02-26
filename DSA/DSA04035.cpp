#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

ll Pow(ll a, ll b){
    if(!b) return 1;
    ll res = Pow(a, b / 2);
    (res *= res) %= mod;
    if(b % 2) (res *= a) %= mod;
    return res;
}

int main(){
    ll a, b;
    while(cin >> a >> b){
        if(!a && !b) return 0;
        cout << Pow(a, b) << '\n';
    }
}