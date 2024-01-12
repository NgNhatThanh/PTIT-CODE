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
        if(k > n) cout << n*(n+1)/2 << '\n';
        else{
            int chia = n/k;
            int du = n%k;
            cout << chia*(k-1)*k/2 + du*(du+1)/2 << '\n';
        }
    }
}