#include <bits/stdc++.h>
#define ll long long
using namespace std;

int legendre(int n, int p){
    int res = 0;
    int tmp = p;
    while(p <= n){
        res += n/p;
        p *= tmp;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        cout << legendre(n, p) << '\n';
    }
}
