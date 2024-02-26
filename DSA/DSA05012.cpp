#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

ll C[1001][1001];

void preCal(){
    for(int i = 0; i <= 1000; ++i){
        C[i][0] = 1;
        for(int j = 1; j <= i; ++j) C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
    }
}

int main(){ 
    preCal();
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << C[n][k] << '\n';
    }
}