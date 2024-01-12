#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll bcnn(int a, int b){
    return 1ll*a*b/__gcd(a, b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        ll bc = bcnn(bcnn(x, y), z);
        if(bc >= pow(10, n)) cout << -1 << '\n';
        else{
            ll k = pow(10, n-1) / bc;
            ll du = (ll)pow(10, n-1) % bc;
            bc *= k + (du != 0);
            cout << bc << '\n';
        }
    }
}

