#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

struct MaTran{
    ll mt[2][2] = {{0, 1}, {1, 1}};
    friend MaTran operator * (MaTran A, MaTran B){
        MaTran res;
        res.mt[0][0] = (A.mt[0][0] * B.mt[0][0] + A.mt[0][1] * B.mt[1][0]) % mod;
        res.mt[0][1] = (A.mt[0][0] * B.mt[0][1] + A.mt[0][1] * B.mt[1][1]) % mod;
        res.mt[1][0] = (A.mt[1][0] * B.mt[0][0] + A.mt[1][1] * B.mt[1][0]) % mod;
        res.mt[1][1] = (A.mt[1][0] * B.mt[0][1] + A.mt[1][1] * B.mt[1][1]) % mod;
        return res;
    }
};

MaTran Pow(MaTran A, int k){
    if(k == 1) return A;
    MaTran res = Pow(A, k / 2);
    res = res * res;
    if(k % 2) res = res * A;
    return res;
}

int main(){ 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        MaTran res;
        res = Pow(res, n);
        cout << res.mt[1][0] << '\n';
    }
}