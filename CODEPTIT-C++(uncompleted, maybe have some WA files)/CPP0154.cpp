#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        int res;
        if(k > n) res = n*(n+1)/2;
        else{
            int chia = n/k;
            int du = n%k;
            res = chia*(k-1)*k/2 + du*(du+1)/2;
        }
        cout << (res == k) << '\n';
    }
}