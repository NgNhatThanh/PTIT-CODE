#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll fibo[100];

void ktao(){
    fibo[1] = fibo[2] = 1;
    for(int i=3; i<=92;++i) fibo[i]=fibo[i-1]+fibo[i-2];
}

char solve(int n, ll k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k<=fibo[n-2]) return solve(n-2, k);
    else return solve(n-1, k-fibo[n-2]);
}

int main(){
    ktao();
	int t;
    cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        cout << solve(n, k) << '\n';
    }
}