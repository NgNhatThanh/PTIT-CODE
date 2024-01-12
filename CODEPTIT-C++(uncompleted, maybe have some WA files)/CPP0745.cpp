#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9+7;

ll f[1005];

void cal(){
    f[1] = f[2] = 1;
    for(int i=3; i<=1000; ++i) f[i] = (f[i-1] + f[i-2]) % mod;
}

int main() {
    cal();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << f[n] << '\n';
    }
}
