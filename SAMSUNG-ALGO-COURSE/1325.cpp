#include <bits/stdc++.h>
#define ll long long

using namespace std;

int solve(int n, ll k){
    int len = pow(2, n-1);
    if(k == len) return n;
    if(k < len) return solve(n-1, k);
    else return solve(n-1, k-len);
}

int main(){
	int t;
    cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        cout << solve(n, k) << '\n';
    }
}