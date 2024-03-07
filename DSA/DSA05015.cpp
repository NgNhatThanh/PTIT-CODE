#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

ll P[1005][1005];

void precal(){
    for(int i = 1; i <= 1000; ++i) P[i][0] = 1; 
    for(int n = 1; n <= 1000; ++n){
        for(int k = 1; k <= 1000; ++k){
            if(k > n) P[n][k] = 0;
            else if(k == n) P[n][k] = 1;
            else P[n][k] = (P[n][k - 1] * (n - k + 1)) % mod;
        }
    }
}

int main(){
    precal();
    int t = 1;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << P[n][k] << '\n';
    }
}